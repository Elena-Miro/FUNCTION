#include <iostream>
#include <ctime>
using namespace std;
void printArray(const int array[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	cout << array[i] << " ";
	cout << endl;
}
void selectionSort(int array[], size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		size_t minIndex = i;
		int min = array[i];
		for (size_t j = i; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				minIndex = j;
			}
		}
		int tmp = array[i];
		array[i] = array[minIndex];
		array[minIndex] = tmp;
	}
}
int main()
{
	srand(time(NULL));
	const size_t size = 10;
	int array[size];
	for (size_t i = 0; i < size; i++)
		array[i] = rand() % 20 + 1;
	cout << "Your array: ";
	printArray(array, size);
	selectionSort(array, size);
	cout << "Your sorted array: ";
	printArray(array, size);
	return 0;

}