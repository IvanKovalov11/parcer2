#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float x, y;
	char op, op1;
	cin >> x;
	cin.get(op1);
	while (op1 != '\n')
	{
		cin.get(op);
		cin.get(op1);
		cin >> y;
		cin.get(op1);
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
			
	}
	cout << x;
	system("pause");
	return 0;
}
