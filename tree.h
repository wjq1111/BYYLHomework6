#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include "block.h"
using namespace std;
static int Index = 0;
enum Nodetype
{
	Node_Program, Node_Operator, Node_Bool, Node_Const, Node_Id, Node_Type, Node_Stmt
};
enum Optype
{
	Op_Add = 1, Op_Sub, Op_Mul, Op_Div, Op_Equal, Op_Not, Op_NotEqual, Op_And, Op_Or, Op_AndBit, Op_OrBit, Op_Mod, Op_Big, Op_Small, Op_BigEqual, Op_SmallEqual, Op_AddEqual, Op_SubEqual, Op_MulEqual, Op_DivEqual, Op_AddAdd, Op_SubSub, Op_UMINUS
};
enum Typetype
{
	Type_Int, Type_Char, Type_String, Type_ConstInt, Type_ConstChar
};
enum ConstType
{
	Int8, Int10, Int16, Charr, Stringg
};
enum Stmttype
{
	Stmt_Declare = 1, Stmt_Assign, Stmt_If, Stmt_While, Stmt_For ,Stmt_Printf, Stmt_Scanf, Stmt_Return, Stmt_Else
};
enum Exprtype
{
	Expr_Int = 1, Expr_Char, Expr_Bool
};
#define maxchildnum 100
#define maxsibnum 100

struct Node
{
	Exprtype exprtype;
	int Num;
	int Value;
	int iflevel;
	int whilelevel;
	int forlevel;
	Nodetype nodetype;
	Optype optype;
	Typetype tytype;
	Stmttype stmttype;
	ConstType consttype;
	union
	{
		string str_val;
		int int_val;
		bool bool_val;
	};
	Node *leftchild;
	Node *rightchild;
	Node *child[maxchildnum];
	Node *father;
	Node *sibling[maxsibnum];

	Node(Nodetype nodetype);
	void createleftchild(Node *node);
	void createrightchild(Node *node);
	void sibtochild(Node *nodefather, Node *nodesibling, int i);
	void addchild(Node *node);
	void addsibling(Node *node);
	void setnum(Node *node);
	void printast(Node *node);
	void typecheck(Node *node);
};