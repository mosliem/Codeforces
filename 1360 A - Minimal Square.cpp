#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int a, b;
		cin >> a >> b;
		if (b < a)
		{
			if (b * 2 <= a)
				cout << a * a << endl;
			else
				cout << pow(2*b,2) << endl;
		}
		else
		{
			if (a * 2 <= b)
				cout << b * b << endl;
			else
				cout << pow(2*a,2) << endl;
		}
	}
}