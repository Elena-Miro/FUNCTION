#include <iostream>
#include <time.h>
//#define TASK1

using namespace std;
int square(int x)
{
	int result = x * x;
	return result;
}
int subtraction(int x,int y)
{
	int result = x - y;
	return result;
}
int multiplication(int x,int y)
{
	int result = x * y;
	return result;
}
int main()
{
#ifdef TASK1

	srand(time(NULL));
	const size_t size = 3;
	int matrix[size][size];


	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size; j++)
			matrix[i][j] = rand() % 51 - 20;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
			cout << matrix[i][j] << "  ";
		cout << endl;
	}
	cout << endl;

	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size; j++)
			if (matrix[i][j] < 0)
				matrix[i][j] = 0;
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
			cout << matrix[i][j] << "  ";
		cout << endl;
	}
	cout << endl;
	
	for (size_t i = 0; i < size; i++)
		for (size_t j = 0; j < size; j++)
		{
			if (!(matrix[i][j] % 2)) 
			 matrix[i][j] = -matrix[i][j]; 
		}
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
			cout << matrix[i][j] << "  ";
		cout << endl;
	}

#endif// TASK1
	int x;
	cout << "Enter a number: ";
	cin >> x;
	int result = square(x);
	cout << "Your result:" << result<<endl;
	int y;
	cout << "Enter another nummer:";
	cin >> y;
	int result2 = subtraction(x, y);
		cout << "Subtraction result: "<<result2<<endl;
		int result3 = multiplication(x, y);
			cout << "Multiplication result: " << result3 << endl;

	return 0;
}
