/*2.1
#include<iostream>
using namespace std;
int main()
{
	char a;
	cin >> a;
	if ((int)a >= 97 && (int)a <= 122)
	{
		int b = (int)a;
		b = b - 32;
		a = (char)b;
		cout << a;
	}
	else
	{
		int b = (int)a;
		cout << ++b;
	}

	system("pause");
	return 0;
}
2.2
#include<iostream>
using namespace std;
int main()
{
	float x, y;
	cin >> x;
	if ((x > 0 )&& (x < 1))
	{

		y = 3 - 2 * x;
		cout << y;
	}
	else if ((x < 5) && (x >= 1))
	{
		y = 1 / (2 * x) + 1;
		cout << y;
	}
	else if ((x >= 5) && (x < 10))
	{
		y = x * x;
		cout << y;
	}
	else
	{
		cout << "错误";
	}
	system("pause");
	return 0;
}
2.3

#include<iostream>
using namespace std;
int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	if (((a + b) > c) && ((a + c) > b) && ((b + c) > a) && a > 0 && b > 0 && c > 0)
	{
		float C = a + b + c;
		if (a == b || a == c || b == c)
		{
			cout << "是等边三角形！！！！！！！！";
		}
		cout << C;

	}
	else
	{
		cout << "戳啦";
	}
	system("pause");
	return 0;
}

2.4
#include<iostream>
using namespace std;
int main()
{
	float a, c;
	char b;
	cin >> a >> b >> c;
	if (b == '+')
	{
		c = a + c;
	}
	else if (b == '-')
	{
		c = a - c;
	}
	else if (b == '*')
	{
		c = a * c;
	}
	else if (b == '/')
	{
		if (c != 0)
		{
			c = a / c;
		}
		else
		{
			cout << "戳啦，不能是0";

		}


	}
	else if (b == '%')
	{
		if ((int)a == a && (int)c == c&&c!=0)
		{
			c = (int)a % (int)c;
		}
		else
		{
			cout << "戳啦，不能是小鼠,或者是0";
		}
	}
	cout << c;
	system("pause");
	return 0;
}
2.5

*


#include<iostream>
#include<string>
using namespace std;
int main()
{	int num=0, egl=0, chin=0, qita=0, kg=0;
	string a;
	getline(cin,a);
	int i = 0;


	for (i;i<=a.size() ; i++)
	{
		if ((int)a[i] >= 32 && (int)a[i] <= 127)
		{

			if ((int)a[i] >= 48 && (int)a[i] <= 57)
			{
				num++;
			}
			else if (((int)a[i] <= 90 && (int)a[i] >= 65) || ((int)a[i] <= 122 && (int)a[i] >= 97))
			{
				egl++;
			}
			else if (a[i] ==' ')
			{
				kg++;
			}
			else
			{
				qita++;
			}
		}
		else
		{
			chin++;
		}
	}
		cout<< "数字: " << num << endl;
		cout<< "英文字母: " << egl << endl;
		cout << " 空格: " << kg<< endl;
		cout<< "中文字符: " << chin/2 << endl;
		cout << "  其他: " << qita << endl;

	system("pause");
	return 0;


}

 2.6

#include<iostream>
using namespace std;
int main()
{
	int c;
	int a, b;
	cin >> a >> b;
	for ( c = 2; c < a && c < b; c++)
	{
		if (a % c == 0 && b % c == 0)
		{


			break;
		}

	}
	if (c== a ||c== b)
	{
		cout << "没有" << endl;
		int d =a * b;
		cout << d;
	}
	else
	{
		int d=(a * b) / c;
		cout << c<<endl<< d;
	}

	system("pause");
	return 0;


}
2.7

#include<iostream>
using namespace std;
int main()
{
	cout << "*" << endl;
	cout << "**" << endl;
	cout << "***" << endl;
	cout << "****" << endl;
	cout << "*****" << endl;
	system("pause");
	return 0;


}
2.8
*/#include<iostream>
using namespace std;
int main()
{

	float a, b;
	cin >> a;
	float c = a;
	for (b=a-1; ((a - b) >= (1e-5)) || ((b - a) >= (1e-5)); )
	{
		 b = a;
		a = (a + c / a) / 2;
		
	}
	cout << b;
	system("pause");
	return 0;


}

/*2.9
#include<iostream>
using namespace std;
int main()
{
	float mon = 0, num = 0, day = 0;
	for (num = 1; num <= 100; )
	{

		if (num * 2 <= 100)
		{
			
			num = num * 2;
			mon = num + mon;
			day++;

		}
		else
		{
			break;
		}
	}
	mon = mon * 0.8;
	cout << mon/day ;
	system("pause");
	return 0;


}
*/