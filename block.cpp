#include <iostream>
#include <vector>
#include "block.h"
using namespace std;
void block::printblock()
{
	cout << "# ";
	for(int i = 0; i < this->id.size(); i++)
	{
		cout << this->id[i] << " ";
	}
	cout << endl;
}
void curblock::printcurblock()
{
	cout << "# ";
	for(int i = 0; i < this->id.size(); i++)
	{
		cout << this->id[i] << " ";
	}
	cout << endl;
}