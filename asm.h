#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include "tree.h"
using namespace std;

extern vector<pair<string, string> > table;
extern vector<string> printfTable;
extern vector<string> scanfTable;
extern vector<string> warnings;
extern int label;
extern int andlabel;

void genAsm(Node *node);
void setLabel(Node *node);
void setDeclareAsm(Node *node);
void setAssignAsm(Node *node);
int findInTable(string id, vector<pair<string, string> > table);
int findInTable(string id, vector<string> table);

void getExpressionVal(Node *node, string type);
void setExpressionAsm(Node *node);

void setIfAsm(Node *node, int level);
void setWhileAsm(Node *node, int level);
void setBoolAsm(Node *node, Optype optype, int level, string type);
void setForAsm(Node *node, int level);

void setScanfAsm(Node *node);
void setScanfString();
void setPrintfAsm(Node *node);
void setPrintString();
void setEnd();