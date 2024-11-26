#include<iostream>
using namespace std;
bool is_prime(int num)
{
	int a;
	for (int i = 2;i<num;i++)
	{
		a = num / i;
		if (num == a * i)
		{
			return false;
		}

	}
	return true;
}
int main()
{
	
	int a = 2;
	int j =0;
	for (int i =0; i <= 199; a++ )
	{

		if (i%10==0&&i!=0&&i!=j)
		{
			j = i;
			if (is_prime(a) == true)
			{
				i++;
				cout <<a << " ";
			}
			cout << endl;
			 
		}
		else 
		{
			if (is_prime(a) == true)
			{
				i++;
				 
				cout << a<< "  ";
			}
		}
	}
	system("pause");
	return 0;
}
