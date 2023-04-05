#include "stdafx.h"
#include "constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shift.h"
#include "Search.h"

//#define ARRAYS1
#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
	//cout << char(122);
#ifdef ARRAYS1 	
	int arr[n], step;
	/*Print(arr, n);
	cout << "Сумма всех элементов массива: " << Sum(arr, n) << endl;
	cout << "Среддне арифметическое всех элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальный элемент массива: " << Min(arr, n)<<endl;
	cout << "Максимальный элемент массива: " << Max(arr, n)<<endl;
	cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> step;
	ShiftRight(arr, n, step);
	cout << "Массив после сдвига вправо на " << step << " :\n";
	Print(arr, n);
	cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> step;
	ShiftLeft(arr, n , step);
	cout << "Массив после сдвига влево на " << step << " :\n";
	Print(arr, n);
	cout << "\nМассив после сортировки: \n";
	Sort(arr, n);
	Print(arr, n);*/
	const int SIZE = 12;

	double d_arr[SIZE];
	char char_arr[12];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	FillRand(char_arr, SIZE);
	Print(char_arr, SIZE);
	cout << Sum(char_arr, SIZE) << "\n";
	cout << "Среднее значение: " << Avg(char_arr, SIZE) << endl;
	FillRand(arr, n, 0, 5);
	Print(arr, n);
	Search(arr, n);

	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	Sort(d_arr, SIZE);
	Print(d_arr, SIZE);
#endif;
#ifdef ARRAYS2
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Массив из уникальных значений\n";
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Минимальный элемент массива: "<<Min(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: "<<Max(i_arr_2, ROWS, COLS) << endl;
	cout << "Сумма всех элементов массива: "<<Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое всех элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Массив после сортировки: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	int step = 0;
	cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> step;
	ShiftRight(i_arr_2, ROWS, COLS, step);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> step;
	ShiftLeft(i_arr_2, ROWS, COLS, step);
	Print(i_arr_2, ROWS, COLS);
	system("Pause");
	cout << "\nЗададим новый массив: \n";
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);
#endif;
}