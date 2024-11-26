#include<iostream>
#include"string"
using namespace std;
int main()
{
	string a;
	string b;
	cin >> a >> b;
	int x = a.size();//小的
	int y = b.size();//大的
	int num = 0;
	bool found;

	for (int i = 0; i <= x - 1; i++)
	{
		for (int j = i; j <= y - 1; j++)
		{
			if (a[i] == b[j])
			{
				for (int m = 0; (i + m) <= x - 1 && a[i + m] == b[j + m]; m++)
				{
					num++;
				}
				if (num == x)
				{
					cout << a << "是" << b << "的子串" << j;
					found = true;
					break;
				}
				if (!found)
				{
					break;
				}
			}
		}
		if (!found)
		{
			break;
		}

	}
	if (!found)
	{
		cout << "不是";
	}
	system("pause");
	return 0;
}
