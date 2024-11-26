#include<iostream>
using namespace std;
double celsius_to_fah(double cel)
{
	int F = (cel * 9 / 5) + 32;
	return F;
}
double fahrenheit_to_cels(double fah)
{
	int C = (fah - 32)*5/9;
	return C;
}