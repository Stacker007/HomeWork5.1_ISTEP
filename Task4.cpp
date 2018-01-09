/*
4. Ввести массив. Сформировать новый массив из отрицательных элементов первого
массива.
*/

#include <iostream>
#define SIZE 5 //размер массива

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int ourArr[SIZE];
	int newArr[SIZE];
	int sizeOfNew = 0;
	for (int i=0 ; i < SIZE; i++ )		
		{
			cout << "Введите число № "<< i +1<< " ";
			cin >> ourArr[i];
		}
	
	cout << endl << "Исходный массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << ourArr[i] << " ";
	}
	for (int i = 0, j = 0; i < SIZE; i++)
		if (ourArr[i] < 0) sizeOfNew++;
		

	cout << endl << "В результате получается массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout<< newArr[i]<< " ";
	}
	cout << endl;
	system("pause");
}
