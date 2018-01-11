/*
5. Ввести массив, упорядоченный по неубыванию (проверить факт
упорядоченности!). Найти сумму неотрицательных элементов массива.
*/

#include <iostream>
#define SIZE 5 //РАЗМЕР МАССИВА

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int ourArr[SIZE];
	cout << "a[" << 1 << "]= ";
	cin >> ourArr[0];
	for (int i = 1; i < SIZE; i++)
	{
		do {
			cout << "a[" << i + 1 << "]= ";
			cin >> ourArr[i];
			if (ourArr[i] < ourArr[i - 1]) cout << "Этот элемент массива меньше предыдущего! Попробуйте еще раз!\n";
		} while (ourArr[i] < ourArr[i - 1]);
	}
	cout << endl << "Исходный массив: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << ourArr[i] << " ";
	}
	int sum = 0;
	for (int i = SIZE-1; ourArr[i]>=0; i--)
		sum += ourArr[i];
	cout << endl << "Сумма неотрицательных элементов массива: " << sum << endl;
	system("pause");
}
