#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main()
{
	string string;
	float x, y;
	char op;
	getline(cin, string);
	istringstream stream(string);
	stream >> x;
	bool run = false;
	while (stream >> op)
	{
		stream >> y;
		if (op == '+')
		{
			x = x + y;
		}
		else if (op == '-')
		{
			x = x - y;
		}
		else if (op == '*')
		{
			x = x*y;
		}
		else if (op == '/')
		{
			if (y == 0)
			{
				cout << "Can't do this opertion" << endl;
			}
			else
			{
				x = x / y;
			}
		}
		else
		{
			cout << "Can't do this operation" << endl;
			run = true;
		}
	}
	if (!run)
	{
		cout << x;
	}
	return 0;
}
