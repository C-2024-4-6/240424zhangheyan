#include<iostream>
#include"string"
using namespace std;
int main()
{
	string a;
	string b;
	cin >> a >> b;
	int x = a.size();//С��
	int y = b.size();//���
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
					cout << a << "��" << b << "���Ӵ�" << j;
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
		cout << "����";
	}
	system("pause");
	return 0;
}
