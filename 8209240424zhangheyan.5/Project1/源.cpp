/*
5.1
#include<iostream>
using namespace std;
class Time
{

	int hour;
	int minute;
	int sec;
public:
	void settime(int h, int m, int s)
	{
		hour = h;
		minute = m;
		sec = s;
	}
	void showtime()
	{
		cout << "现在的时间是" << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.settime(2, 3, 4);
	tl.showtime();
	system("pause");
	return 0;
}
5.2

#include <iostream>             //将类声明头文件包含进来
#include "student.h"

using namespace std;
int main()
{
	 
	Student stud;            //定义对象
	Student stud1(007, "tc",'m');

	stud.set_value(001, "zhy", 'm');
	stud.display();              //执行stud对象的display函数
	stud1.display();
	system("pause");
	return 0;
}

5.3
#include<iostream>
using namespace std;
class cupboid
{
	int v;
	int c;
	int k;
	int g;
public :
	void set(int C, int K, int G)
	{
		c = C;
		k = K;
		g = G;
		v = c * k * g;
	}
	void show()
	{
		cout << "长方体的体积为" << v << endl;
	}
};
int main()
{
	int a, b, c,d,e,f,g,h,i;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
	cupboid a1;
	cupboid a2;
	cupboid a3;
	a1.set(a, b, c);
	a2.set(d, e, f);
	a3.set(g, h, i);
	a1.show();
	a2.show();
	a3.show()
		;

	system("pause");
	return 0;
}
5.4
#include<iostream>
using namespace std;
class student
{
public:
	int  num;
	int grade;

};
void max( student *b)
{
	student a[5];
	for (int h = 0; h <= 4; h++)
	{
		a[h].grade = b[h].grade;
	}
	int c = 0;
	for (int i = 0; i <= 4; i++)
	{
		if (i!=4)
		{
			if (a[i].grade <= a[i + 1].grade)
			{
				int b = a[i].grade;
				a[i].grade = a[i + 1].grade;
				a[i + 1].grade = b;
				c++;
			}
		}
		else
		{
			if (c == 0)
			{
				i = 5;
			}
			else
			{
				i = -1;
				c = 0;
			}
		}
		 
	}
	 
	for (int j = 0; j <= 4; j++)
	{
		if (a[0].grade == b[j].grade)
		{
			cout << b[j].num;
		}
	}
	 
}
int main()
{
	student a[5];
	a[0].num = 1;
	a[0].grade = 100;
	a[1].num = 2;
	a[1].grade = 99;
	a[2].num = 3;
	a[2].grade = 101;
	a[3].num = 4;
	a[3].grade = 110;
	a[4].num = 5;
	a[4].grade = 140;
	 max(a);
	
	system("pause");
	return 0;
	

}
5.5
*/
#include<iostream>
using namespace std;
class point
{
	int x;
	int y;
public:
	point()
	{
		x = 60;
		y = 80;
	}
	void setpoint(int i, int j)
	{
		x += i;
		y += j;
		display();
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point a;
	a.display();
	a.setpoint(5, 6);
	system("pause");
	return 0;
}