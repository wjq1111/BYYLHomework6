#include <iostream>
#include "tree.h"
#include "block.h"
using namespace std;
extern block b[100];
extern curblock cb;
extern int blockindex;
Node::Node(Nodetype nodetype)
{
	this->Num = 0;
	this->nodetype = nodetype;
	this->leftchild = NULL;
	this->rightchild = NULL;
	this->father = NULL;
	for(int i = 0; i < maxchildnum; i++)
	{
		this->child[i] = NULL;
	}
}
void Node::createleftchild(Node *node)
{
	this->leftchild = node;
	node ->father = this;
}
void Node::createrightchild(Node *node)
{
	this->rightchild = node;
	node->father = this;
}
void Node::sibtochild(Node *nodefather, Node *nodesibling, int i)
{
	nodefather->child[i] = nodesibling;
	int k = 0;
	Node *cur = nodesibling->sibling[k];
	while(cur != NULL)
	{
		i++;
		cur->sibtochild(nodefather, cur, i);
		k++;
		cur = nodesibling->sibling[k];
	}
}
void Node::addchild(Node *node)
{
	this->child[0] = node;

	int i = 1, j = 0;
	Node *cur = node->sibling[j];
	while(cur != NULL)
	{
		this->sibtochild(this, cur, i);
		i++, j++;
		cur = node->sibling[j];
	}
}
void Node::addsibling(Node *node)
{
	Node *cur = this->sibling[0];
	int i = 0;
	while(cur != NULL)
	{
		i++;
		cur = this->sibling[i];
	}
	this->sibling[i] = node;
}
void Node::setnum(Node *node)
{
	node->Num = Index;
	Index = Index + 1;
	if(node->leftchild != NULL)
	{
		setnum(node->leftchild);
	}
	if(node->rightchild != NULL)
	{
		setnum(node->rightchild);
	}
	for(int i = 0; i < maxchildnum; i++)
	{
		if(node->child[i] != NULL)
		{
			setnum(node->child[i]);
		}
	}
}
void Node::printast(Node *node)
{
	cout << "# 序号\t" << node->Num << "\t节点类型\t";
	if(node->nodetype == Node_Program)
	{
		cout << "程序开始\t\t\t\t\t";
	}
	else if(node->nodetype == Node_Const)
	{
		cout << "常量\t\t";
		switch(node->consttype)
		{
			case 0:
				cout << "int8\t" << node->int_val << "\t\t"; break;
			case 1:
				cout << "int10\t" << node->int_val << "\t\t"; break;
			case 2:
				cout << "int16\t" << node->int_val << "\t\t"; break;
			case 3:
				cout << "字符\t\t" << node->str_val << "\t\t"; break;
			case 4:
				cout << "字符串\t" << node->str_val << "\t\t"; break;
		}
	}
	else if(node->nodetype == Node_Bool)
	{
		cout << "布尔\t\t";
	}
	else if(node->nodetype == Node_Type)
	{
		cout << "数据类型\t\t";
		switch(node->tytype)
		{
			case 0: 
				cout << "int\t\t\t"; break;
			case 1:
				cout << "char\t\t"; break;
			case 2:
				cout << "string\t\t"; break;
			case 3:
				cout << "constint\t"; break;
			case 4:
				cout << "constchar\t"; break;
		}
	}
	else if(node->nodetype == Node_Id)
	{
		cout << "变量名\t" << node->str_val << "\t\t\t\t";
	}
	else if(node->nodetype == Node_Operator)
	{
		cout << "运算\t\t操作符\t";
		switch(node->optype)
		{
			case 1:
				cout << "+\t\t"; break;
			case 2:
				cout << "-\t\t"; break;
			case 3:
				cout << "*\t\t"; break;
			case 4:
				cout << "/\t\t"; break;
			case 5:
				cout << "==\t\t"; break;
			case 6:
				cout << "!\t\t"; break;
			case 7:
				cout << "!=\t\t"; break;
			case 8:
				cout << "&&\t\t"; break;
			case 9:
				cout << "||\t\t"; break;
			case 10:
				cout << "&\t\t"; break;
			case 11:
				cout << "|\t\t"; break;
			case 12:
				cout << "%\t\t"; break;
			case 13:
				cout << ">\t\t"; break;
			case 14:
				cout << "<\t\t"; break;
			case 15:
				cout << ">=\t\t"; break;
			case 16:
				cout << "<=\t\t"; break;
			case 17:
				cout << "+=\t\t"; break;
			case 18:
				cout << "-=\t\t"; break;
			case 19:
				cout << "*=\t\t"; break;
			case 20:
				cout << "/=\t\t"; break;
			case 21:
				cout << "++\t\t"; break;
			case 22:
				cout << "--\t\t"; break;
			case 23:
				cout << "-\t\t"; break;
		}
	}
	else if(node->nodetype == Node_Stmt)
	{
		switch(node->stmttype)
		{
			case 1:
				cout << "声明语句\t\t\t\t\t"; break;
			case 2:
				cout << "赋值语句\t\t\t\t\t"; break;
			case 3:
				cout << "If语句\t\t\t\t\t"; cout << node->iflevel; break;					
			case 4:
				cout << "While语句\t\t\t\t"; break;					
			case 5:
				cout << "For语句\t\t\t\t\t"; break;					
			case 6:
				cout << "Prinf语句\t\t\t\t"; break;					
			case 7:
				cout << "Scanf语句\t\t\t\t"; break;					
			case 8:
				cout << "Return语句\t\t\t\t"; break;
			case 9:
				cout << "Else语句\t\t\t\t"; break;
		}
	}
	cout << "child:\t";
	if(node->leftchild != NULL)
	{
		cout << node->leftchild->Num << " ";
	}
	if(node->rightchild != NULL)
	{
		cout << node->rightchild->Num << " ";
	}
	for(int i = 0; i < maxchildnum; i++)
	{
		if(node->child[i] != NULL)
		{
			cout << node->child[i]->Num << " ";
		}
	}
	cout << endl;
	if(node->leftchild != NULL)
	{
		printast(node->leftchild);
	}
	if(node->rightchild != NULL)
	{
		printast(node->rightchild);
	}
	for(int i = 0; i < maxchildnum; i++)
	{
		if(node->child[i] != NULL)
		{
			printast(node->child[i]);
		}
	}
}
void Node::typecheck(Node *node)
{
	if(blockindex == 0)
		return;
	if(node->optype == Op_UMINUS)
	{
		typecheck(node->leftchild);
		return;
	}
	else if(node->nodetype == Node_Operator && node->optype != Op_UMINUS)
	{
		typecheck(node->leftchild);
		typecheck(node->rightchild);
		return;
	}
	else if(node->nodetype == Node_Const || node->str_val == "")
	{
		return;
	}
	int flag = 0;
	for(int i = 0; i < cb.id.size(); i++)
	{
		if(cb.id[i] == node->str_val)
		{
			flag = 1;
			break;
		}
	}
	if(!flag)
	{
		cerr << "Error: No Declaration of " << node->str_val << ".\n";
		exit(1);
	}
}