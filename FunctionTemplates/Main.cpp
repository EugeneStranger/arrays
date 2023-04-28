#include "stdafx.h"
#include "constants.h"
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


//#define ARRAYS1
#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS1 	
	int arr[n], step;
	FillRand(arr, n, 0, 5);
	Print(arr, n);
	cout << "����� ���� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ���� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� ������� �������: " << Min(arr, n) << endl;
	cout << "������������ ������� �������: " << Max(arr, n) << endl;
	cout << "������� �����, �� ������� ����� �������� �������� ������� ������: "; cin >> step;
	ShiftRight(arr, n, step);
	cout << "������ ����� ������ ������ �� " << step << " :\n";
	Print(arr, n);
	cout << "������� �����, �� ������� ����� �������� �������� ������� �����: "; cin >> step;
	ShiftLeft(arr, n, step);
	cout << "������ ����� ������ ����� �� " << step << " :\n";
	Print(arr, n);
	cout << "\n������ ����� ����������: \n";
	Sort(arr, n);
	Print(arr, n);
	Search(arr, n);
#endif;
#ifdef ARRAYS2
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "���������� ������ �� ���������� ��������\n";
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "����������� ������� �������: " << Min(i_arr_2, ROWS, COLS) << endl;
	cout << "������������ ������� �������: " << Max(i_arr_2, ROWS, COLS) << endl;
	cout << "����� ���� ��������� �������: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "������� �������������� ���� ��������� �������: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "������ ����� ����������: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	int step = 0;
	cout << "������� �����, �� ������� ����� �������� �������� ������� ������: "; cin >> step;
	ShiftRight(i_arr_2, ROWS, COLS, step);
	Print(i_arr_2, ROWS, COLS);
	cout << "������� �����, �� ������� ����� �������� �������� ������� �����: "; cin >> step;
	ShiftLeft(i_arr_2, ROWS, COLS, step);
	Print(i_arr_2, ROWS, COLS);
	system("Pause");
	cout << "\n������� ����� ������: \n";
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);
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
void UniqueRand(unsigned char arr[], const int n)
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

