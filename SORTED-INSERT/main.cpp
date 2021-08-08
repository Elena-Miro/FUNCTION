#include <iostream>
using namespace std;
//функци€ печати массива на экран
void printArray(const int array[], size_t size)
{
//проход по всему массиву и поэлементный вывод    
for(size_t i=0;i<size;i++)
cout << array[i] << " ";
cout << endl;
}
int main()
{
    const size_t size = 6;
    //объ€вление массива   
    int array[size];
    //ввод массива с клавиатуры    
    for(size_t i=0;i<size;i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> array[i];
    }
    //вывод массива с помощью функции    
    cout << "Your array: ";
    printArray(array, size);
    //значение, которое вставим в массив    
    int value;
    cout << "Enter value to insert: ";
    cin >> value;
    //индекс куда вставим элемент в массив    
    size_t index;
    cout << "Enter index of insertion element: ";
    cin >> index;
    //новый массив, куда будут записаны все значени€ со вставленным элементом    
    int copy[size+1];
    //копируем элементы в новый массив от 0 до index    
    for(size_t i=0;i<index;i++)
    copy[i] = array[i];
    //записываем считанный элемент по указанному индексу    
    copy[index] = value;
    //копируем элементы исходного массива от index до ыш€у    
    for(size_t i=index;i<size;i++)
    copy[i + 1] = array[i];
    //печать массива со вставленным элементом путЄм вызова функции    
    cout << "Your inserted array: ";
    printArray(copy, size + 1);
    return 0;
}