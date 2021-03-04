#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include "asm.h"
using namespace std;

int findInTable(string id, vector<pair<string, string> > table)
{
	int index = 0;
	while(table[index].second != id)
	{
		index++;
	}
	return index;
}
string findattrIntTable(string id, vector<pair<string, string> > table)
{
	for(int i = 0; i < table.size(); i++)
	{
		if(table[i].second == id)
		{
			return table[i].first;
		}
	}
}
int findInTable(string id, vector<string> table)
{
	int index = 0;
	while(table[index] != id)
	{
		index++;
	}
	return index;
}
void setExpressionAsm(Node *node, string type)
{
	if(node->leftchild != NULL && node->leftchild->leftchild != NULL)
	{
		setExpressionAsm(node->leftchild, type);
		if(node->leftchild->nodetype == Node_Operator)
		{
			if(node->leftchild->optype == Op_UMINUS)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\timul\t"
					 << "$-1, %eax\n";
				cout << "\tpushl\t"
					 << "%eax\n";
			}
			else if(node->leftchild->optype == Op_Add)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\taddl\t%eax, %ebx\n";
				cout << "\tpushl\t"
					 << "%ebx\n";
			}
			else if(node->leftchild->optype == Op_Sub)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\tsubl\t%eax, %ebx\n";
				cout << "\tpushl\t"
					 << "%ebx\n";
			}
			else if(node->leftchild->optype == Op_Mul)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\timul\t%eax, %ebx\n";
				cout << "\tpushl\t"
					 << "%ebx\n";
			}
			else if(node->leftchild->optype == Op_Div)
			{
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tcltd\n";
				cout << "\tidiv\t%ebx\n";
				cout << "\tpushl\t"
					 << "%eax\n";
			}
			else if(node->leftchild->optype == Op_Mod)
			{
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tcltd\n";
				cout << "\tidiv\t"
					 << "%ebx\n";
				cout << "\tpushl\t"
					 << "%edx\n";
			}
		}
	}
	if(node->rightchild != NULL && node->rightchild->leftchild != NULL)
	{
		setExpressionAsm(node->rightchild, type);
		if(node->rightchild->nodetype == Node_Operator)
		{
			if(node->rightchild->optype == Op_UMINUS)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\timul\t"
					 << "$-1, %eax\n";
				cout << "\tpushl\t"
					 << "%eax\n";
			}
			else if(node->rightchild->optype == Op_Add)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\taddl\t%eax, %ebx\n";
				cout << "\tpushl\t"
					 << "%ebx\n";
			}
			else if(node->rightchild->optype == Op_Sub)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\tsubl\t%eax, %ebx\n";
				cout << "\tpushl\t"
					 << "%ebx\n";
			}
			else if(node->rightchild->optype == Op_Mul)
			{
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\timul\t%eax, %ebx\n";
				cout << "\tpushl\t"
					 << "%ebx\n";
			}
			else if(node->rightchild->optype == Op_Div)
			{
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tcltd\n";
				cout << "\tidiv\t%ebx\n";
				cout << "\tpushl\t"
					 << "%eax\n";
			}
			else if(node->rightchild->optype == Op_Mod)
			{
				cout << "\tpopl\t"
					 << "%ebx\n";
				cout << "\tpopl\t"
					 << "%eax\n";
				cout << "\tcltd\n";
				cout << "\tidiv\t"
					 << "%ebx\n";
				cout << "\tpushl\t"
					 << "%edx\n";
			}
		}
	}
	if(node->optype == Op_UMINUS)
	{
		if(node->leftchild->nodetype == Node_Id)
		{
			string t = findattrIntTable(node->leftchild->str_val, table);
			if(type != t)
			{
				string warn = "Node " + to_string(node->leftchild->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			int index = findInTable(node->leftchild->str_val, table);
			cout << "\tpushl\t"
				 << "-" << index * 4 + 4<< "(%ebp)\n";
		}
		else if(node->leftchild->nodetype == Node_Const)
		{
			cout << "\tpushl\t"
				 << "$" << node->leftchild->int_val << "\n";
		}
		return;
	}
	if(node->leftchild->nodetype == Node_Id)
	{
		if(node->optype == Op_Mod && node->rightchild->nodetype == Node_Operator && node->rightchild->optype != Op_UMINUS)
		{
			cout << "\tpopl\t"
				 << "%ebx\n";
		}
		if(node->rightchild->optype == Op_UMINUS)
			cout << "\tpopl\t"
				 << "%eax\n";
		string l = findattrIntTable(node->leftchild->str_val, table);
		if(type != l && type != "")
		{
			string warn = "Node " + to_string(node->leftchild->Num) + ": An implicit type cast is required.\n";
			warnings.push_back(warn);
		}
		int index = findInTable(node->leftchild->str_val, table);
		cout << "\tpushl\t"
			 << "-" << index * 4 + 4<< "(%ebp)\n";
		if(node->rightchild->optype == Op_UMINUS)
			cout << "\tpushl\t"
				 << "%eax\n";
		if(node->optype == Op_Mod && node->rightchild->nodetype == Node_Operator && node->rightchild->optype != Op_UMINUS)
		{
			cout << "\tpushl\t"
				 << "%ebx\n";
		}
	}
	else if(node->leftchild->nodetype == Node_Const)
	{
		if(node->optype == Op_Mod && node->rightchild->nodetype == Node_Operator && node->rightchild->optype != Op_UMINUS)
		{
			cout << "\tpopl\t"
				 << "%ebx\n";
		}
		if(node->rightchild->optype == Op_UMINUS)
			cout << "\tpopl\t"
				 << "%eax\n";
		if(node->leftchild->consttype == Int10)
		{
			if(type == "char")
			{
				string warn = "Node " + to_string(node->leftchild->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			cout << "\tpushl\t"
				 << "$" << node->leftchild->int_val << "\n";
		}
		else if(node->leftchild->consttype == Charr)
		{
			if(type == "int")
			{
				string warn = "Node " + to_string(node->leftchild->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			int ch = int(node->leftchild->str_val[1]);
			cout << "\tpushl\t"
				 << "$" << ch << "\n";
		}
		if(node->rightchild->optype == Op_UMINUS)
			cout << "\tpushl\t"
				 << "%eax\n";
		if(node->optype == Op_Mod && node->rightchild->nodetype == Node_Operator && node->rightchild->optype != Op_UMINUS)
		{
			cout << "\tpushl\t"
				 << "%ebx\n";
		}
	}
	
	if(node->rightchild->nodetype == Node_Const)
	{
		if(node->optype == Op_Mod && node->leftchild->nodetype == Node_Operator && node->leftchild->optype != Op_UMINUS)
		{
			cout << "\tpopl\t"
				 << "%ebx\n";
		}
		if(node->leftchild->optype == Op_UMINUS)
			cout << "\tpopl\t"
				 << "%eax\n";
		if(node->rightchild->consttype == Int10)
		{
			if(type == "char")
			{
				string warn = "Node " + to_string(node->rightchild->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			cout << "\tpushl\t"
				 << "$" << node->rightchild->int_val << "\n";
		}
		else if(node->rightchild->consttype == Charr)
		{
			if(type == "int")
			{
				string warn = "Node " + to_string(node->rightchild->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			int ch = int(node->rightchild->str_val[1]);
			cout << "\tpushl\t"
				 << "$" << ch << "\n";
		}
		if(node->leftchild->optype == Op_UMINUS)
			cout << "\tpushl\t"
				 << "%eax\n";
		if(node->optype == Op_Mod && node->leftchild->nodetype == Node_Operator && node->leftchild->optype != Op_UMINUS)
		{
			cout << "\tpushl\t"
				 << "%ebx\n";
		}
	}
	else if(node->rightchild->nodetype == Node_Id)
	{
		if(node->optype == Op_Mod && node->leftchild->nodetype == Node_Operator && node->leftchild->optype != Op_UMINUS)
		{
			cout << "\tpopl\t"
				 << "%ebx\n";
		}
		if(node->leftchild->optype == Op_UMINUS)
			cout << "\tpopl\t"
				 << "%eax\n";
		string r = findattrIntTable(node->rightchild->str_val, table);
		if(type != r && type != "")
		{
			string warn = "Node " + to_string(node->rightchild->Num) + ": An implicit type cast is required.\n";
			warnings.push_back(warn);
		}
		int index = findInTable(node->rightchild->str_val, table);
		cout << "\tpushl\t"
			 << "-" << index * 4 + 4<< "(%ebp)\n";
		if(node->leftchild->optype == Op_UMINUS)
			cout << "\tpushl\t"
				 << "%eax\n";
		if(node->optype == Op_Mod && node->leftchild->nodetype == Node_Operator && node->leftchild->optype != Op_UMINUS)
		{
			cout << "\tpushl\t"
				 << "%ebx\n";
		}
	}
}
void getExpressionVal(Node *node, string type)
{
	setExpressionAsm(node, type);
	if(node->optype == Op_Add)
	{
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\taddl\t%eax, %ebx\n";		
		cout << "\tmovl\t"
			 << "%ebx, %eax\n";
	}
	if(node->optype == Op_Sub)
	{
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\tsubl\t%eax, %ebx\n";
		cout << "\tmovl\t"
			 << "%ebx, %eax\n";
	}
	if(node->optype == Op_Mul)
	{
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\timul\t%eax, %ebx\n";
		cout << "\tmovl\t"
			 << "%ebx, %eax\n";
	}
	if(node->optype == Op_Div)
	{
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\tcltd\n";
		cout << "\tidiv\t%ebx\n";
	}
	if(node->optype == Op_Mod)
	{
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\tcltd\n";
		cout << "\tidiv\t%ebx\n";
		cout << "\tmovl\t"
			 << "%edx, %eax\n";
	}
	if(node->optype == Op_UMINUS)
	{
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\timul\t"
			 << "$-1, %eax\n";
	}
}
void setCalAsm(Node *node)
{
	cout << "\tsubl\t"
	 	 << "$" << table.size() * 4
	 	 << ", %esp\n";
	Node *id = node->leftchild;
	int index = findInTable(id->str_val, table);
	cout << "\tmovl\t"
		 << "-" << index * 4 + 4 << "(%ebp)"
		 << ", %eax\n";
	cout << "\tpushl\t"
		 << "%eax\n";
	if(node->rightchild->nodetype == Node_Const)
	{
		cout << "\tmovl\t"
			 << "$" << node->rightchild->int_val
			 << ", %eax\n";
	}
	else if(node->rightchild->nodetype == Node_Id)
	{
		int index = findInTable(node->rightchild->str_val, table);
		cout << "\tmovl\t"
			 << "-" << index * 4 + 4 << "(%ebp)"
			 << ", %eax\n";
	}
	else if(node->rightchild->nodetype == Node_Operator)
	{
		getExpressionVal(node->rightchild, "");
	}
	if(node->optype == Op_AddEqual)
	{
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\taddl\t"
			 << "%eax, %ebx\n";
		cout << "\tmovl\t"
			 << "%ebx"
			 << ", -" << index * 4 + 4 << "(%ebp)\n";
	}
	else if(node->optype == Op_SubEqual)
	{
		cout << "\tpopl\t"
			 << "%ebx\n";
		cout << "\tsubl\t"
			 << "%eax, %ebx\n";
		cout << "\tmovl\t"
			 << "%ebx"
			 << ", -" << index * 4 + 4 << "(%ebp)\n";
	}
	cout << "\taddl\t"
	 	 << "$" << table.size() * 4
	 	 << ", %esp\n";
	cout << "\n";
}
void setScanfString()
{
	for(int i = 0; i < scanfTable.size(); i++)
	{
		cout << "str" << i << ":\n"
			 << "\t.string\t"
			 << scanfTable[i] << "\n";
	}
	cout << "\n";
}
void setPrintString()
{
	cout << "\t.section .rodata\n";
	for(int i = 0; i < printfTable.size(); i++)
	{
		cout << "STR" << i << ":\n"
			 << "\t.string\t"
			 << printfTable[i] << "\n";
	}
	cout << "\n";
}
void setScanfAsm(Node *node)
{
	cout << "\tsubl\t"
		 << "$" << 4 * table.size() << ", %esp\n";
	Node *scanf = node->child[0];

	int i = 1;
	Node *child = node->child[1];
	while(child != NULL)
	{
		i++;
		child = node->child[i];
	}
	i--;
	int ii = i;
	while(i >= 1)
	{
		string id;
		Node *child = node->child[i];
		for(int i = 1; i < child->str_val.length(); i++)
		{
			id += child->str_val[i];
		}
		int index = (findInTable(id, table) + 1) * 4;
		cout << "\tleal\t"
			 << "-" << index << "(%ebp)"
			 << ", %eax\n";
		cout << "\tpushl\t"
			 << "%eax\n";
		i--;
	}
	cout << "\tsubl\t"
		 << "$" << 4 * table.size() << ", %ebp\n";
	int str_index = findInTable(scanf->str_val, scanfTable);
	cout << "\tpushl\t"
		 << "$str" << str_index << "\n";
	cout << "\tcall\tscanf\n";
	cout << "\taddl\t"
		 << "$" << 4 * table.size() << ", %ebp\n";
	cout << "\taddl\t"
		 << "$" << 4 * (table.size() + ii + 1) << ", %esp\n";
	cout << "\n";
}
void setPrintfAsm(Node *node)
{
	cout << "\tsubl\t"
		 << "$" << 4 * table.size() << ", %esp\n";
	int i = 0;
	Node *child = node->child[i];
	while(child != NULL)
	{
		i++;
		child = node->child[i];
	}
	if(i == 0)
	{
		string print = node->str_val;
		int str_index = findInTable(print, printfTable);
		cout << "\tsubl\t"
			 << "$" << 4 * table.size() << ", %ebp\n";
		cout << "\tpushl\t"
			 << "$STR" << str_index << "\n";
		cout << "\tcall\tprintf\n";
		cout << "\taddl\t"
			 << "$" << 4 * table.size() << ", %ebp\n";
		cout << "\taddl\t"
			 << "$" << 4 * table.size() + 4<< ", %esp\n";
		return;
	}
	int ii = i;
	i--;
	Node *args = node->child[i];
	while(i >= 0)
	{
		if(args->nodetype == Node_Id)
		{
			int index = (findInTable(args->str_val, table) + 1) * 4;
			cout << "\tpushl\t"
				 << "-" << index << "(%ebp)\n";
		}
		else if(args->nodetype == Node_Operator)
		{
			getExpressionVal(args, "");
			cout << "\tpushl\t"
				 << "%eax\n";
		}
		i--;
		args = node->child[i];
	}
	cout << "\tsubl\t"
		 << "$" << 4 * table.size() << ", %ebp\n";
	string print = node->str_val;
	int str_index = findInTable(print, printfTable);
	cout << "\tpushl\t"
		 << "$STR" << str_index << "\n";
	cout << "\tcall\tprintf\n";
	cout << "\taddl\t"
		 << "$" << 4 * table.size() << ", %ebp\n";
	cout << "\taddl\t"
		 << "$" << 4 * (table.size() + ii) + 4 << ", %esp\n";
	cout << "\n";
}
void setDeclareAsm(Node *node)
{
	string type;
	if(node->child[0]->tytype == Type_Int)
		type = "int";
	else if(node->child[0]->tytype == Type_Char)
		type = "char";
	int i = 1;
	Node *id = node->child[i];
	while(id != NULL)
	{
		table.push_back(make_pair(type, id->str_val));
		if(id->child[0] != NULL)
		{
			Node *node = id->child[0];
			if(node->nodetype == Node_Const)
			{
				if(node->consttype == Int10)
				{
					if(type == "char")
					{
						string warn = "Node " + to_string(node->Num) + ": An implicit type cast is required.\n";
						warnings.push_back(warn);
					}
					cout << "\tmovl\t"
						 << "$" << node->int_val;
					int index = (findInTable(id->str_val, table) + 1) * 4;
					cout << ", -" << index << "(%ebp)\n";
				}
				else if(node->consttype == Charr)
				{
					if(type == "int")
					{
						string warn = "Node " + to_string(node->Num) + ": An implicit type cast is required.\n";
						warnings.push_back(warn);
					}
					cout << "\tmovl\t"
						 << "$" << node->str_val;
					int index = (findInTable(id->str_val, table) + 1) * 4;
					cout << ", -" << index << "(%ebp)\n";
				}
			}
			else if(node->nodetype == Node_Operator)
			{
				cout << "\tsubl\t"
			 		 << "$" << (table.size() - 1) * 4
			 		 << ", %esp\n";
			 	getExpressionVal(node, type);
			 	int index = (findInTable(id->str_val, table) + 1) * 4;
				cout << "\tmovl\t"
					 << "%eax, -" << index << "(%ebp)\n";
				cout << "\taddl\t"
					 << "$" << (table.size() - 1) * 4
					 << ", %esp\n";
			}
		}
		i++;
		id = node->child[i];
	}
	cout << "\n";
}
void setAssignAsm(Node *node)
{
	Node *id = node->leftchild;
	string type = findattrIntTable(id->str_val, table);
	Node *expr = node->rightchild;

	if(expr->nodetype == Node_Stmt)
	{
		if(expr->stmttype == Stmt_Assign)
		{
			setAssignAsm(expr);
			int index = findInTable(expr->leftchild->str_val, table);
			cout << "\tmovl\t"
				 << "-" << index * 4 + 4 << "(%ebp)"
				 << ", %ecx\n";
		}
	}
	if(expr->nodetype == Node_Const)
	{
		if(expr->consttype == Int10)
		{
			if(type == "char")
			{
				string warn = "Node " + to_string(expr->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			cout << "\tmovl\t"
				 << "$" << expr->int_val;
			int index = (findInTable(id->str_val, table) + 1) * 4;
			cout << ", -" << index << "(%ebp)\n";
		}
		else if(expr->consttype == Charr)
		{
			if(type == "int")
			{
				string warn = "Node " + to_string(expr->Num) + ": An implicit type cast is required.\n";
				warnings.push_back(warn);
			}
			cout << "\tmovl\t"
				 << "$" << expr->str_val;
			int index = (findInTable(id->str_val, table) + 1) * 4;
			cout << ", -" << index << "(%ebp)\n";
		}
	}
	else if(expr->nodetype == Node_Operator)
	{
		cout << "\tsubl\t"
	 		 << "$" << table.size() * 4
	 		 << ", %esp\n";
	 	getExpressionVal(expr, type);
	 	int index = (findInTable(id->str_val, table) + 1) * 4;
		cout << "\tmovl\t"
			 << "%eax, -" << index << "(%ebp)\n";
		cout << "\taddl\t"
			 << "$" << table.size() * 4
			 << ", %esp\n";
	}
	else if(expr->nodetype == Node_Stmt)
	{
		if(expr->stmttype == Stmt_Assign)
		{
			int index = findInTable(id->str_val, table);
			cout << "\tmovl\t"
				 << "%ecx"
				 << ", -" << index * 4 + 4 << "(%ebp)\n";	 
		}
	}
	cout << "\n";
}
void setBoolAsm(Node *node, Optype optype, int level, string type, int Not)
{
	if(node->optype == Op_Not)
	{
		Not++;
		setBoolAsm(node->child[0], optype, level, type, Not);
	}
	else if(node->optype == Op_And)
	{
		andlabel++;
		setBoolAsm(node->leftchild, node->optype, level, type, Not);
		setBoolAsm(node->rightchild, node->optype, level, type, Not);
		if(optype != Op_And && type == "if")
		{
			cout << "\tjmp\t\t"
				 << ".L" << type << level << "0\n";
			cout << "." << type << level << label << andlabel << ":\n";
			if(label == 0)
				cout << "\tjmp\t\t"
					 << ".L" << type << level << "1\n";
		}
		if(optype != Op_And && type == "whi")
		{
			cout << "\tjmp\t\t"
				 << ".L" << type << level << "1\n";
			cout << "." << type << level << label << andlabel << ":\n";	
		}
		if(optype != Op_And && type == "for")
		{
			cout << "\tjmp\t\t"
				 << ".L" << type << level << "2\n";
			cout << "." << type << level << label << andlabel << ":\n";
			if(level != 1)
				cout << "\tjmp\t\t"
					 << ".L" << type << level << "1\n";
			else
				cout << "\tjmp\t\t"
					 << ".L" << type << level << "2\n";
		}
	}
	else if(node->optype == Op_Or)
	{
		label++;
		setBoolAsm(node->leftchild, node->optype, level, type, Not);
		setBoolAsm(node->rightchild, node->optype, level, type, Not);

		if(label == 1 && type == "if")
		{
			cout << "\tjmp\t\t"
				 << ".L" << type << level << "1\n\n";
		}
		if(optype != Op_Or && label != 1 && type == "if")
		{
			cout << "\tjmp\t\t"
				 << ".L" << type << level << "0\n";
			cout << "." << type << level << label << ":\n";
		}
		label--;
	}
	else
	{
		cout << "\tsubl\t"
			 << "$" << table.size() * 4
		 	 << ", %esp\n";
		if(node->leftchild->nodetype == Node_Id)
		{
			int index = findInTable(node->leftchild->str_val, table);
			cout << "\tmovl\t"
				 << "-" << index * 4 + 4 << "(%ebp)"
				 << ", %eax\n";
			cout << "\tpushl\t"
				 << "%eax\n";
		}
		else if(node->leftchild->nodetype == Node_Const)
		{
			cout << "\tmovl\t"
				 << "$" << node->leftchild->int_val
				 << ", %eax\n";
			cout << "\tpushl\t"
				 << "%eax\n";
		}
		else if(node->leftchild->nodetype == Node_Operator)
		{
			getExpressionVal(node->leftchild, "");
			cout << "\tpushl\t"
				 << "%eax\n";
		}
		if(node->rightchild->nodetype == Node_Id)
		{
			int index = findInTable(node->rightchild->str_val, table);
			cout << "\tmovl\t"
				 << "-" << index * 4 + 4 << "(%ebp)"
				 << ", %ebx\n";
		}
		else if(node->rightchild->nodetype == Node_Const)
		{
			cout << "\tmovl\t"
				 << "$" << node->rightchild->int_val
				 << ", %ebx\n";
		}
		else if(node->rightchild->nodetype == Node_Operator)
		{
			getExpressionVal(node->rightchild, "");
			cout << "\tmovl\t"
				 << "%eax, %ebx\n";
		}
		cout << "\tpopl\t"
			 << "%eax\n";
		cout << "\taddl\t"
			 << "$" << table.size() * 4
			 << ", %esp\n";
		cout << "\tcmp\t\t"
			 << "%ebx, %eax\n";
		if(node->optype == Op_Equal)
		{
			if(optype == Op_And)
			{
				cout << "\tjne\t\t";
				cout << "." << type << level << label << andlabel << "\n\n";
			}
			else if(optype == Op_Or)
			{
				cout << "\tje\t\t"
					 << ".L" << type << level;
				if(type == "if")
					cout << "0\n\n";
				else if(type == "whi")
					cout << "1\n\n";
				else if(type == "for")
					cout << "2\n\n";
			}
			else
			{
				if(type == "if")
					if(Not % 2 == 0)
						cout << "\tjne\t\t";
					else
						cout << "\tje\t\t";
				else if(type == "whi")
					cout << "\tje\t\t";
				else if(type == "for")
					cout << "\tjne\t\t";
				cout << ".L" << type << level;
				cout << "1\n\n";
			}
		}
		else if(node->optype == Op_NotEqual)
		{
			if(optype == Op_And)
			{
				cout << "\tje\t\t";
				cout << "." << type << level << label << andlabel << "\n\n";
			}
			else if(optype == Op_Or)
			{
				cout << "\tjne\t\t"
					 << ".L" << type << level;
				if(type == "if")
					cout << "0\n\n";
				else if(type == "whi")
					cout << "1\n\n";
				else if(type == "for")
					cout << "2\n\n";
			}
			else
			{
				if(type == "if")
					if(Not % 2 == 0)
						cout << "\tje\t\t";
					else
						cout << "\tjne\t\t";
				else if(type == "whi")
					cout << "\tjne\t\t";
				else if(type == "for")
					cout << "\tje\t\t";
				cout << ".L" << type << level;
				cout << "1\n\n";
			}
		}
		else if(node->optype == Op_Big)
		{
			if(optype == Op_And)
			{
				cout << "\tjle\t\t";
				cout << "." << type << level << label << andlabel<< "\n\n";
			}
			else if(optype == Op_Or)
			{
				cout << "\tjg\t\t"
					 << ".L" << type << level;
				if(type == "if")
					cout << "0\n\n";
				else if(type == "whi")
					cout << "1\n\n";
				else if(type == "for")
					cout << "2\n\n";
			}
			else
			{
				if(type == "if")
					if(Not % 2 == 0)
						cout << "\tjle\t\t";
					else
						cout << "\tjg\t\t";
				else if(type == "whi")
					cout << "\tjg\t\t";
				else if(type == "for")
					cout << "\tjle\t\t";
				cout << ".L" << type << level;
				cout << "1\n\n";
			}
			
		}
		else if(node->optype == Op_Small)
		{
			if(optype == Op_And)
			{
				cout << "\tjge\t\t";
				cout << "." << type << level << label << andlabel<< "\n\n";
			}
			else if(optype == Op_Or)
			{
				cout << "\tjl\t\t"
					 << ".L" << type << level;
				if(type == "if")
					cout << "0\n\n";
				else if(type == "whi")
					cout << "1\n\n";
				else if(type == "for")
					cout << "2\n\n";
			}
			else
			{
				if(type == "if")
					if(Not % 2 == 0)
						cout << "\tjge\t\t";
					else
						cout << "\tjl\t\t";
				else if(type == "whi")
					cout << "\tjl\t\t";
				else if(type == "for")
					cout << "\tjge\t\t";
				cout << ".L" << type << level;
				cout << "1\n\n";
			}
			
		}
		else if(node->optype == Op_BigEqual)
		{
			if(optype == Op_And)
			{
				cout << "\tjl\t\t";
				cout << "." << type << level << label << andlabel<< "\n\n";
			}
			else if(optype == Op_Or)
			{
				cout << "\tjge\t\t"
					 << ".L" << type << level;
				if(type == "if")
					cout << "0\n\n";
				else if(type == "whi")
					cout << "1\n\n";
				else if(type == "for")
					cout << "2\n\n";
			}
			else
			{
				if(type == "if")
					if(Not % 2 == 0)
						cout << "\tjl\t\t";
					else
						cout << "\tjge\t\t";
				else if(type == "whi")
					cout << "\tjge\t\t";
				else if(type == "for")
					cout << "\tjl\t\t";
				cout << ".L" << type << level;
				cout << "1\n\n";
			}
		}
		else if(node->optype == Op_SmallEqual)
		{
			if(optype == Op_And)
			{
				cout << "\tjg\t\t";
				cout << "." << type << level << label << andlabel << "\n\n";
			}
			else if(optype == Op_Or)
			{
				cout << "\tjle\t\t"
					 << ".L" << type << level;
				if(type == "if")
					cout << "0\n\n";
				else if(type == "whi")
					cout << "1\n\n";
				else if(type == "for")
					cout << "2\n\n";
			}
			else
			{
				if(type == "if")
					if(Not % 2 == 0)
						cout << "\tjg\t\t";
					else
						cout << "\tjle\t\t";
				else if(type == "whi")
					cout << "\tjle\t\t";
				else if(type == "for")
					cout << "\tjg\t\t";
				cout << ".L" << type << level;
				cout << "1\n\n";
			}
		}
		else
		{
			cout <<  "# Warning : It should be a boolen statement, but not.\n";
			if(node->stmttype == Stmt_Assign)
			{
				Node *id = node->leftchild;
				int index = findInTable(id->str_val, table);
				cout << "\tmovl\t"
					 << "%ebx"
					 << ", -" << index * 4 + 4 << "(%esp)\n";
			}
			if(optype == Op_Or)
			{
				cout << "\tcmp\t\t"
					 << "$0, %ebx\n";
				if(type == "whi")
				{
					//cout << "\tje\t\t"
					//	 << ".L" << type << level << "2\n\n";
					cout << "\tjmp\t\t"
						 << ".L" << type << level << "1\n\n";
				}
				else if(type == "if")
				{
					cout << "\tje\t\t"
						 << ".L" << type << level << "1\n\n";
					cout << "\tjmp\t\t"
						 << ".L" << type << level << "0\n\n";
				}
			}
			else if(optype == Op_And)
			{
				cout << "\tcmp\t\t"
					 << "$0, %ebx\n";
				if(type == "whi")
				{
					cout << "\tje\t\t"
						 << "." << type << level << label << andlabel << "\n\n";
				}
				else if(type == "if")
				{
					cout << "\tje\t\t"
						 << ".L" << type << level << "1\n\n";
				}
			}
			else
			{
				cout << "\tcmp\t\t"
					 << "$0, %ebx\n";
				if(type == "whi")
				{
					cout << "\tje\t\t"
						 << ".L" << type << level << "2\n\n";
					cout << "\tjmp\t\t"
						 << ".L" << type << level << "1\n\n";
				}
				else if(type == "if")
				{
					cout << "\tje\t\t"
						 << ".L" << type << level << "1\n\n";
				}
			}
		}
	}
}
void setIfAsm(Node *node, int level)
{
	string type = "if";
	setBoolAsm(node->child[0], node->optype, level, type, 0);
	cout << ".L" << type << level << "0:\n";
	int i = 1;
	Node *child = node->child[i];
	while(child->stmttype != Stmt_Else)
	{
		if(child->stmttype == Stmt_Declare)
			setDeclareAsm(child);
		else if(child->stmttype == Stmt_Assign)
			setAssignAsm(child);
		else if(child->stmttype == Stmt_Scanf)
			setScanfAsm(child);
		else if(child->stmttype == Stmt_Printf)
			setPrintfAsm(child->child[0]);
		else if(child->stmttype == Stmt_If)
			setIfAsm(child, child->iflevel);
		else if(child->stmttype == Stmt_While)
			setWhileAsm(child, child->whilelevel);
		else if(child->stmttype == Stmt_For)
			setForAsm(child, child->forlevel);
		if(child->nodetype == Node_Operator)
			setCalAsm(child);
		i++;
		if(node->child[i] == NULL)
		{
			cout << ".L" << type << level << "1:\n";
			return;
		}
		child = node->child[i];
	}
	cout << "\tjmp\t\t"
		 << ".L" << type << level << "2\n\n";
	cout << ".L" << type << level << "1:\n";
	i++;
	child = node->child[i];
	while(child != NULL)
	{
		if(child->stmttype == Stmt_Declare)
			setDeclareAsm(child);
		else if(child->stmttype == Stmt_Assign)
			setAssignAsm(child);
		else if(child->stmttype == Stmt_Scanf)
			setScanfAsm(child);
		else if(child->stmttype == Stmt_Printf)
			setPrintfAsm(child->child[0]);
		else if(child->stmttype == Stmt_If)
			setIfAsm(child, child->iflevel);
		else if(child->stmttype == Stmt_While)
			setWhileAsm(child, child->whilelevel);
		else if(child->stmttype == Stmt_For)
			setForAsm(child, child->forlevel);
		if(child->nodetype == Node_Operator)
			setCalAsm(child);
		i++;
		child = node->child[i];
	}
	cout << ".L" << type << level << "2:\n";
}
void setWhileAsm(Node *node, int level)
{
	string type = "whi";
	cout << ".L" << type << level << "0:\n";
	setBoolAsm(node->child[0], node->optype, level, type, 0);
	cout << "\tjmp\t\t"
		 << ".L" << type << level << "2\n";
	cout << ".L" << type << level << "1:\n";
	int i = 1;
	Node *child = node->child[i];
	while(child != NULL)
	{
		if(child->stmttype == Stmt_Declare)
			setDeclareAsm(child);
		else if(child->stmttype == Stmt_Assign)
			setAssignAsm(child);
		else if(child->stmttype == Stmt_Scanf)
			setScanfAsm(child);
		else if(child->stmttype == Stmt_Printf)
			setPrintfAsm(child->child[0]);
		else if(child->stmttype == Stmt_If)
			setIfAsm(child, child->iflevel);
		else if(child->stmttype == Stmt_While)
			setWhileAsm(child, child->whilelevel);
		else if(child->stmttype == Stmt_For)
			setForAsm(child, child->forlevel);
		if(child->nodetype == Node_Operator)
			setCalAsm(child);
		i++;
		child = node->child[i];
	}
	cout << "\tjmp\t\t"
		 << ".L" << type << level << "0\n";
	cout << ".L" << type << level << "2:\n";
}
void setForAsm(Node *node, int level)
{
	string type = "for";
	Node *first = node->child[0];
	if(first->stmttype == Stmt_Assign)
	{
		Node *node = first->child[0];
		int index = findInTable(node->str_val, table);
		if(node->child[0]->nodetype == Node_Const)
		{
			if(node->child[0]->consttype == Int10)
			{
				string t = findattrIntTable(node->str_val, table);
				if(t != "int")
				{
					string warn = "Node " + to_string(node->child[0]->Num) + ": An implicit type cast is required.\n";
					warnings.push_back(warn);
				}
				cout << "\tmovl\t"
				 << "$" << node->child[0]->int_val
				 << ", %eax\n";
			}
			else if(node->child[0]->consttype == Charr)
			{
				string t = findattrIntTable(node->str_val, table);
				if(t != "char")
				{
					string warn = "Node " + to_string(node->child[0]->Num) + ": An implicit type cast is required.\n";
					warnings.push_back(warn);
				}
				cout << "\tmovl\t"
				 << "$" << node->child[0]->str_val
				 << ", %eax\n";
			}
		}
		else if(node->child[0]->nodetype == Node_Id)
		{
			int index = findInTable(node->child[0]->str_val, table);
			cout << "\tmovl\t"
				 << "-" << index * 4 + 4
				 << ", %eax\n";
		}
		else if(node->child[0]->nodetype == Node_Operator)
		{
			string type = findattrIntTable(node->str_val, table);
			getExpressionVal(node->child[0], type);
		}
		cout << "\tmovl\t"
			 << "%eax, -" << 4 * (index + 1) << "(%ebp)\n";
	}
	cout << ".L" << type << level << "0:\n";
	Node *second = node->child[1];
	setBoolAsm(second, Optype(0), level, type, 0);
	cout << ".L" << type << level << "2:\n";
	Node *third = node->child[2];
	int i = 3;
	Node *child = node->child[3];
	while(child != NULL)
	{
		if(child->stmttype == Stmt_Declare)
			setDeclareAsm(child);
		else if(child->stmttype == Stmt_Assign)
			setAssignAsm(child);
		else if(child->stmttype == Stmt_Scanf)
			setScanfAsm(child);
		else if(child->stmttype == Stmt_Printf)
			setPrintfAsm(child->child[0]);
		else if(child->stmttype == Stmt_If)
			setIfAsm(child, child->iflevel);
		else if(child->stmttype == Stmt_While)
			setWhileAsm(child, child->whilelevel);
		else if(child->stmttype == Stmt_For)
			setForAsm(child, child->forlevel);
		if(child->nodetype == Node_Operator)
			setCalAsm(child);
		i++;
		child = node->child[i];
	}
	if(third->nodetype == Node_Operator)
	{
		setCalAsm(third);
	}
	else if(third->nodetype == Node_Stmt)
	{
		if(third->stmttype == Stmt_Assign)
			setAssignAsm(third);
	}
	cout << "\tjmp\t\t" << ".L" << type << level << "0\n";
	cout << ".L" << type << level << "1:\n";
}
void setLabel(Node *node)
{
	if(node->nodetype == Node_Program)
	{
		cout << "\t.text\n" 
			 << "\t.globl\tmain\n"
			 << "\t.type\tmain, @function\n"
			 << "main:\n"
			 << "\tpushl\t%ebp\n"
			 << "\tmovl\t%esp, %ebp\n\n";
		int i = 0;
		Node *child = node->child[i];
		while(child != NULL)
		{
			setLabel(child);
			i++;
			child = node->child[i];
		}
	}
	else if(node->nodetype == Node_Stmt)
	{
		if(node->stmttype == Stmt_Declare)
			setDeclareAsm(node);
		else if(node->stmttype == Stmt_Assign)
			setAssignAsm(node);
		else if(node->stmttype == Stmt_Scanf)
			setScanfAsm(node);
		else if(node->stmttype == Stmt_Printf)
			setPrintfAsm(node->child[0]);
		else if(node->stmttype == Stmt_If)
			setIfAsm(node, node->iflevel);
		else if(node->stmttype == Stmt_While)
			setWhileAsm(node, node->whilelevel);
		else if(node->stmttype == Stmt_For)
			setForAsm(node, node->forlevel);
		else if(node->stmttype == Stmt_Return);
	}
	else if(node->nodetype == Node_Operator)
	{
		setCalAsm(node);
	}
}
void setEnd()
{
	cout << "\tpopl\t%ebp\n"
		 << "\tmovl\t$0, %eax\n"
		 << "\tret\n\n"
		 << "\t.section	.note.GNU-stack,\"\",@progbits\n";
}
void genAsm(Node *node)
{
	setPrintString();
	setScanfString();
	setLabel(node);
	setEnd();
}