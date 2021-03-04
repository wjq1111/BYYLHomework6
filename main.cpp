#include "main.tab.hh"
#include "common.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
Node *root = NULL;
block b[100];
curblock cb;
int blockindex = -1;
int forflag = 0;
int IfLevel = 0;
int WhileLevel = 0;
int ForLevel = 0;
vector<string> forvariable[100];
vector<pair<string, string> > table;
vector<string> printfTable;
vector<string> scanfTable;
vector<string> warnings;
int label = 0;
int andlabel = 0;
int main()
{
	cout << "# Start" << endl;
	yyparse();
	if(root)
	{
		root->setnum(root);
		cout << "\n";
		root->printast(root);
		cout << "\n";
		
		genAsm(root);
		
		cout << "\n# Finish" << endl;
		
		for(int i = 0; i < warnings.size(); i++)
		{
			cout << "# " << warnings[i];
		}
	}
	return 0;
}
int yyerror(char const* message)
{
	cout << message << endl;
	return -1;
}