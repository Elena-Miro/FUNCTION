#include <iostream>
#include <ctime>
using namespace std;
void printArray(const int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}
void changeNegative(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		if (array[i] < 0)
			array[i] = 0;
}
int sumMatrix(int matrix[3][3])
{
	int sum = 0;
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			sum += matrix[i][j];
	return sum;
}
int maxMatrix(const int matrix[3][3])
{
	int max = matrix[0][0];
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			if (matrix[i][j] > max)
				max=matrix[i][j];
	return max;
}
void printMatrix(int matrix[3][3])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
	
}
void changenegativeMatrix(int matrix[3][3])
{
	for (size_t i = 0; i < 3; i++)
		for (size_t j = 0; j < 3; j++)
			if (matrix[i][j] < 0)
				matrix[i][j] = 0;
}
int main()
{
	const size_t size = 5;
	int array[size];
	cout << "Enter your array " << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " element of array:";
		cin >> array[i];
	}
	cout << "Your array: ";
	printArray(array, size);
	changeNegative(array, size);
	cout << "Your negativ array:";
	printArray(array, size);
	srand(time(NULL));
	int matrix[3][3];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			matrix[i][j] = rand() % 30 - 10;
	cout << "Your matrix "<<endl;
	printMatrix(matrix);
	int matrixSum = sumMatrix(matrix);
	cout << "Your sum of matrix: " << matrixSum << endl;
	int matrixMax = maxMatrix(matrix);
	cout << "Your max element: " << matrixMax << endl;
	changenegativeMatrix(matrix);
	cout << "Negative elements: "<<endl;
	printMatrix(matrix);
	return 0;
}