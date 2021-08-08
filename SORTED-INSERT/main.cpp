#include <iostream>
using namespace std;
//������� ������ ������� �� �����
void printArray(const int array[], size_t size)
{
//������ �� ����� ������� � ������������ �����    
for(size_t i=0;i<size;i++)
cout << array[i] << " ";
cout << endl;
}
int main()
{
    const size_t size = 6;
    //���������� �������   
    int array[size];
    //���� ������� � ����������    
    for(size_t i=0;i<size;i++)
    {
        cout << "Enter " << i + 1 << " element: ";
        cin >> array[i];
    }
    //����� ������� � ������� �������    
    cout << "Your array: ";
    printArray(array, size);
    //��������, ������� ������� � ������    
    int value;
    cout << "Enter value to insert: ";
    cin >> value;
    //������ ���� ������� ������� � ������    
    size_t index;
    cout << "Enter index of insertion element: ";
    cin >> index;
    //����� ������, ���� ����� �������� ��� �������� �� ����������� ���������    
    int copy[size+1];
    //�������� �������� � ����� ������ �� 0 �� index    
    for(size_t i=0;i<index;i++)
    copy[i] = array[i];
    //���������� ��������� ������� �� ���������� �������    
    copy[index] = value;
    //�������� �������� ��������� ������� �� index �� ����    
    for(size_t i=index;i<size;i++)
    copy[i + 1] = array[i];
    //������ ������� �� ����������� ��������� ���� ������ �������    
    cout << "Your inserted array: ";
    printArray(copy, size + 1);
    return 0;
}