
#include<iostream>
using namespace std;

int gys(int a, int b, int& c)
{
	if (a >= b)
	{
		int f = a;
		a = b;
		b = f;
	}
	int t, d;
	for (int i = a;i>0; i--)
	{
		t = a / i;
		d = b / i;
		if (a == t * i && b == d * i)
		{
			c = a * d;
			return i;
		}
	}
	
}
int main()
{
	int d;
	int a, b;
	cin >> a>>b;
	cout << gys(a, b, d) << endl;
	cout << d;
	system("pause");
	return 0;
}