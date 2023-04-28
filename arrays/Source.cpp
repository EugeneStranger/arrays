#include "stdafx.h"
#include "constants.h"
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shift.h"
#include "Search.h"
#include "Print.cpp"
#include "Statistics.cpp"
#include "Sort.cpp"
#include "Shift.cpp"
#include "Search.cpp"

void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n);
void FillRand(unsigned char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(unsigned char arr[ROWS][COLS], const int ROWS, const int COLS);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(unsigned char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(unsigned char arr[ROWS][COLS], const int ROWS, const int COLS);


#define ARRAYS1
//#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS1 	
	int arr[n], step;
	FillRand(arr, n, 0, 20);
	Print(arr, n);
	//cout << "Сумма всех элементов массива: " << Sum(arr, n) << endl;
	//cout << "Среддне арифметическое всех элементов массива: " << Avg(arr, n) << endl;
	//cout << "Минимальный элемент массива: " << Min(arr, n) << endl;
	//cout << "Максимальный элемент массива: " << Max(arr, n) << endl;
	//cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> step;
	//ShiftRight(arr, n, step);
	//cout << "Массив после сдвига вправо на " << step << " :\n";
	//Print(arr, n);
	//cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> step;
	//ShiftLeft(arr, n, step);
	//cout << "Массив после сдвига влево на " << step << " :\n";
	//Print(arr, n);
	//cout << "\nМассив после сортировки: \n";
	//Sort(arr, n);
	//Print(arr, n);
#endif;
#ifdef ARRAYS2
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	//cout << "Символьный массив из уникальных значений\n";
	//UniqueRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//cout << "Минимальный элемент массива: " << Min(i_arr_2, ROWS, COLS) << endl;
	//cout << "Максимальный элемент массива: " << Max(i_arr_2, ROWS, COLS) << endl;
	//cout << "Сумма всех элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	//cout << "Среднее арифметическое всех элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	//cout << "Массив после сортировки: " << endl;
	//Sort(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//int step = 0;
	//cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> step;
	//ShiftRight(i_arr_2, ROWS, COLS, step);
	//Print(i_arr_2, ROWS, COLS);
	//cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> step;
	//ShiftLeft(i_arr_2, ROWS, COLS, step);
	//Print(i_arr_2, ROWS, COLS);
	//system("Pause");
	//cout << "\nЗададим новый массив: \n";
	//FillRand(i_arr_2, ROWS, COLS);
	//Print(i_arr_2, ROWS, COLS);
	//Search(i_arr_2, ROWS, COLS);
#endif;
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double((rand() % 1000000)) / 1000;
	}
}
void FillRand(unsigned char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 255;
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 4;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double((rand() % 1000000)) / 1000;
		}
	}
}
void FillRand(unsigned char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (122 - rand() % (122 - 97 + 1));
		}
	}
}

void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double((rand() % 1000000)) / 1000;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(unsigned arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 255;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique = true;
			do
			{
				unique = true;
				arr[i][j] = rand() % (ROWS * COLS);
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; k == i ? l < j : l < COLS; l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							//j--;
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique = true;
			do
			{
				unique = true;
				arr[i][j] = double((rand() % 1000000)) / 1000;
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; k == i ? l < j : l < COLS; l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}
void UniqueRand(unsigned char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique = true;
			do
			{
				unique = true;
				arr[i][j] = (122 - rand() % (122 - 97 + 1));
				for (int k = 0; k <= i; k++)
				{
					for (int l = 0; k == i ? l < j : l < COLS; l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
					if (!unique)break;
				}
			} while (!unique);
		}
	}
}

