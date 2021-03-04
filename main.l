%option noyywrap
%option yylineno
%{
	#include "common.h"
	#include "main.tab.hh"
    #include <string>
    #include <string.h>
    #include <math.h>
    extern block b[100];
    extern curblock cb;
    extern int blockindex;
    extern int forflag;
    extern vector<string> forvariable[100];
%}

IntegerDec 0|[1-9][0-9]*
IntegerOct 0[0-7]+
IntegerHex 0x([0-9]|[a-e])+
Id [[:alpha:]_][[:alpha:][:digit:]_]*
Idadd \&[[:alpha:]_][[:alpha:][:digit:]_]*
Cha (\'.\')|(\'\\.\')

Quote ("\"")
String \"(.*)\"
EOL (\r\n|\n)
White [\t ]
Cmtbegin1 ("/*")
Cmtelement1 (.|"\n")
Cmtend1 ("*/")

Cmtbegin2 ("//")
Cmtelement2 (.)
Cmtend2 ("\n")

%x COMMENT1
%x COMMENT2
%%

"true" {
    Node *node = new Node(Node_Bool);
    node->bool_val = true;
    yylval = node;
    return True;
}

"false" {
    Node *node = new Node(Node_Bool);
    node->bool_val = false;
    yylval = node;
    return False;
}


"int" return Int;
"char" return Char;
"if" return If;
"else" {
    Node *node = new Node(Node_Stmt);
    node->stmttype = Stmt_Else;
    yylval = node;
    return Else;
}
"while" return While;
"for" {
    forflag++;
    return For;
}
"return" return Return;
"printf" return Printf;
"scanf" return Scanf;
"void" return Void;
"main" return Main;
"const" return Const;
"string" return STR;

"," return Comma;
"&" return AndBit;
"&&" return And;
"|" return OrBit;
"||" return Or;
"%" return Mod;
"=" return Assign;
"+" return Add;
"-" return Sub;
"*" return Mul;
"/" return Div;
"+=" return AddEqual;
"-=" return SubEqual;
"*=" return MulEqual;
"/=" return DivEqual;

"!" return Not;
"!=" return NotEqual;
"==" return Equal;
"<" return Small;
">" return Big;
"<=" return SmallEqual;
">=" return BigEqual;
"%=" return ModEqual;

"++" return AddAdd;
"--" return SubSub;

";" return Semicolon;
"(" return LParen;
")" return RParen;
"{" {
    /*cout << "# before read '{' " << yylineno << endl;
    for(int i = 0; i <= blockindex; i++)
    {
        b[i].printblock();
    }
    cout << "# -----" << endl;
    cb.printcurblock();*/

    blockindex++;
    b[blockindex].id.insert(b[blockindex].id.end(), cb.id.begin(), cb.id.end());

    /*cout << "# after read '{' " << yylineno << endl;
    for(int i = 0; i <= blockindex; i++)
    {
        b[i].printblock();
    }
    cout << "# -----" << endl;
    cb.printcurblock();*/
    return LBrace;
}
"}" {
    /*cout << "# before read '}' " << yylineno << endl;
    for(int i = 0; i <= blockindex; i++)
    {
        b[i].printblock();
    }
    cout << "# -----" << endl;
    cb.printcurblock();*/

    vector<string>().swap(cb.id);
    cb.id.assign(b[blockindex].id.begin(), b[blockindex].id.end());
    vector<string>().swap(b[blockindex].id);
    blockindex--;
    while(!forvariable[forflag].empty())
    {
        string str1 = forvariable[forflag][forvariable[forflag].size()-1];
        string str2 = cb.id[cb.id.size()-1];
        forvariable[forflag].pop_back();
        cb.id.pop_back();
    }
    
    /*cout << "# after read '}' " << yylineno << endl;
    for(int i = 0; i <= blockindex; i++)
    {
        b[i].printblock();
    }
    cout << "# -----" << endl;
    cb.printcurblock();*/
    return RBrace;
}


{Cmtbegin1}  {
                BEGIN COMMENT1;
                cout << "# " << yylineno << ":\n/*";
            }
<COMMENT1>{Cmtelement1} {
                // Do nothing.
                cout << yytext;
            }
<COMMENT1>{Cmtend1} {
                BEGIN INITIAL;
                cout << "*/\n";
            }
{Cmtbegin2}  {
                BEGIN COMMENT2;
                cout << "# " << yylineno << ":\n//";
            }
<COMMENT2>{Cmtelement2} {
                // Do nothing.
                cout << yytext;
            }
<COMMENT2>{Cmtend2} {
                BEGIN INITIAL;
                cout << "# " << "\n";
            }

{Cha} {
   Node *node = new Node(Node_Const);
   node->consttype = Charr;
   node->str_val = yytext;
   yylval = node;
   return Cha; 
}
{IntegerDec} {
    Node *node = new Node(Node_Const);
    node->consttype = Int10;
    node->int_val = atoi(yytext);
    yylval = node;
    return IntegerDec;
}
{IntegerOct} {
    Node *node = new Node(Node_Const);
    node->consttype = Int8;
    string str = yytext;
    int i = 1;
    int ans = 0;
    while(i < str.length())
    {
        ans += (str[i] - '0') * pow(8, str.length() - i - 1);
        i++;
    }
    node->int_val = ans;
    yylval = node;
    return IntegerOct;
}
{IntegerHex} {
    Node *node = new Node(Node_Const);
    node->consttype = Int16;
    string str = yytext;
    int i = 2;
    int ans = 0;
    while(i < str.length())
    {
        if(str[i] >= '0' && str[i] <= '9')
            ans += (str[i] - '0') * pow(16, str.length() - i - 1);
        else
            ans += (str[i] - 'a' + 10) * pow(16, str.length() - i - 1);
        i++;
    }
    node->int_val = ans;
    yylval = node;
    return IntegerHex;
}


{Id} {
    Node *node = new Node(Node_Id);
    node->str_val = yytext;
    yylval = node;
    return Id;
}
{Idadd} {
    Node *node = new Node(Node_Id);
    node->str_val = yytext;
    yylval = node;
    return Idadd;
}
{EOL}
{White}


{String} {
    Node *node = new Node(Node_Const);
    node->consttype = Stringg;
    node->str_val = yytext;
    yylval = node;
    return String;
}


%%