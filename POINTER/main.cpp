#include <iostream>
#include <ctime>
using namespace std;
void incriment (int* a)
{
	cout << "Address of inc: " << a << endl;
	(*a)++;
}
void swap(int array[2])
{
	int tap = array[0];
	array[0] = array[1];
	array[1] = tap;
}
int main()
{
	int a;
	cout << "Enter value to increment: ";
	cin >> a;
	int* pa = &a;
	cout << "Pointer adress value:" << pa << endl;
	cout << "Adress of a:" << &a << endl;
	cout << "Variable value:" << a << endl;
	cout << "Pointer's value" << *pa << endl;
	 a = 10;
	cout << "Pointer adress value:" << pa << endl;
	cout << "Adress of a:" << &a << endl;
	cout << "Variable value:" << a << endl;
	cout << "Pointer's value" << *pa << endl;
	*pa = 6;
	cout << "Pointer adress value:" << pa << endl;
	cout << "Adress of a:" << &a << endl;
	cout << "Variable value:" << a << endl;
	cout << "Pointer's value" << *pa << endl;
	int c = 10;
	pa = &c;
	*pa = 9;
	cout << "Pointer adress value:" << pa << endl;
	cout << "Adress of a:" << &a << endl;
	cout << "Variable value:" << a << endl;
	cout << "Pointer's value" << *pa << endl;
	incriment(&a);
	cout << "Increment:" << a << endl;
	cout << "Enter two numbers: ";
/*int b;
	cin >> a >> b;
	int array[2]{ a,b };
	swap(array);
	cout << "Change value" << a << " " << b << endl;*/
	return 0;
}