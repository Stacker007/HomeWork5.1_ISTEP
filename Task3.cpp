/*
3. В массиве поменять местами первый отрицательный и последний положительный
элементы.
*/

#include <iostream>
#define SIZE 5 //размер массива

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int ourArr[SIZE] = {};
	int numberOfNegative, numberOfPositive;
	int countOfNegative=0, countOfPositive=0;
	for (int i=0 ; i < SIZE; i++ )		
		{
			cout << "Введите число № "<< i +1<< " ";
			cin >> ourArr[i];
		}
	
	for (int i = (SIZE-1); i >=0; i--) {
		if (ourArr[i] < 0) {
			numberOfNegative = i;
			countOfNegative++; //Счетчик отрицательных чисел в массиве
		}
	}
	for (int i = 0; i < SIZE; i++) {
		if (ourArr[i] > 0) {
			numberOfPositive = i;
			countOfPositive++; //Счетчик положительных чисел в массиве
		}
	}
	cout << endl << "Исходный массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << ourArr[i] << " ";
	}
	if (countOfNegative == 0) cout << "Отрицательные числа отсутствуют!" << endl;
	if (countOfPositive == 0) cout << "Положительные числа отсутствуют!" << endl;
	if (countOfPositive > 0 && countOfNegative > 0) {
		int tmp = ourArr[numberOfNegative];
		ourArr[numberOfNegative] = ourArr[numberOfPositive];
		ourArr[numberOfPositive] = tmp;
	}
	cout << endl << "В результате получается массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout<< ourArr[i]<< " ";
	}
	cout << endl;
	system("pause");
}
