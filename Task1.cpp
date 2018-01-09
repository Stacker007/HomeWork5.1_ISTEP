/*
1. Ввести массив целых чисел. Найти количество нулей в массиве и сумму элементов,
стоящих на нечетных местах.
*/

#include <iostream>
#define SIZE 15

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int ourArr[SIZE] = {};
	int countOfNull = 0, sum = 0;
	for (int i = 0; i < SIZE; i++ )		
		{
			cout << "Введите число № "<< i +1<< " ";
			cin >> ourArr[i];
		}

	for (int i = 0; i < SIZE; i++)
	{
		if (ourArr[i] == 0) countOfNull++;
		if ((i+1) % 2 != 0) sum += ourArr[i];
	}

	cout << "\nКоличество нулей равно " << countOfNull << endl;
	cout << "Сумма чисел на нечетных номерах " << sum << endl;

	system("pause");
}
