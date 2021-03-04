#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "tree.h"
using namespace std;
struct block
{
	vector<string> id;
	void printblock();
};
struct curblock
{
	vector<string> id;
	void printcurblock();
};