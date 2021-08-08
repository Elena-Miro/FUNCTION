#include<iostream>
#include<ctime>
using namespace std;
void printArray(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		cout << array[i] << " ";
	cout << endl;
}
void selectedSort(int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		size_t minIndex = i;
		int min = array[i];
		for (size_t j = i; j < size; j++)
			if (array[i] < min)
			{
				min = array[j];
				minIndex = j;
			}

	}

}