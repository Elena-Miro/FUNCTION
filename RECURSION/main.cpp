#include <iostream>
#include <time.h>
using namespace std;
long long int factorial(unsigned int short n)
{
	/*unsigned long long int result = 1;
	for (unsigned short int i = 1; i < n; i++)
		result *= i;
	return result;*/
	/*return n<=1 ? 1: n factorial(n-1)*/
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
}
long long int Mypow(int a,unsigned short int n)
{
	/*long long int result = 1;
	for (unsigned short int i = 0; i < n; i++)
		result *= a;
	return result;*/
	if (n == 0)
		return 1;
	return a*Mypow(a,n-1) ;
}
int fibonaci(size_t n)
{
	/*if (n < 1)
		return 1;
	int first = 1;
	int last = 1;
	for (size_t i = 1; i < n; i++)
	{
		int copy = first;
		first = last;
		last = copy + first;
	}*/
	if (n <= 1)
		return 1;
	return fibonaci(n-1)+fibonaci(n-2);
	
}
int sum(int n)
{
	return n ? n % 10 + sum(n / 10) : 0;
}
int mod(int a, int b)
{
	while (a != 0 && b != 0)
	{
if(a>b) v
	}
}

int main()
{
	unsigned short int n;
	/*cout << "Enter the number to cout factorial: ";
	cin >> n ;
	cout << "Factorial: "<<factorial(n);*/
	/*cout << "Enter base of degree:";
	int base;
	cin >> base;
	cout << "Enter exponent of degree:";
	unsigned short int exponent;
	cin >> exponent;
	cout << "Degree:" << Mypow(base, exponent) << endl;
	/*size_t number;
	cout << "Enter fibonaci:" << endl;
	cin >> number;
	cout <<"Fibonaci result:" << fibonaci(number) << endl;*/
	int number;
	cin >> number;
	cout << "Number of digits:"<<sum(number)<<endl;

	return 0;
}