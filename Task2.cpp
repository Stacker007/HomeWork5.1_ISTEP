/*
2. Найти среднее арифметическое элементов массива и количество элементов,
меньших этого среднего.
*/

#include <iostream>
#define SIZE 5 //размер массива

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	int ourArr[SIZE] = {};
	int countOfLess = 0, sum = 0;
	double middle;
	for (int i=0 ; i < SIZE; i++ )		
		{
			cout << "Введите число № "<< i +1<< " ";
			cin >> ourArr[i];
			sum += ourArr[i];
		}
	middle = double (sum) / SIZE; //Среднее арифметическое
	for (int i = 0; i < SIZE; i++)
		if (ourArr[i] <middle) countOfLess++;
	

	cout << "\nСреднее арифметическое равно " << middle << endl;
	cout << "Количество элементов, меньших этого среднего " << countOfLess << endl;

	system("pause");
}
