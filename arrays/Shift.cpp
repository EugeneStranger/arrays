#include "Shift.h"

void ShiftRight(int arr[], const int n, int step)
{
	int buf;
	for (int i = 1; i <= step; i++)
	{
		buf = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buf;
	}
}
void ShiftRight(double arr[], const int n, int step)
{
	double buf;
	for (int i = 1; i <= step; i++)
	{
		buf = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buf;
	}
}
void ShiftRight(char arr[], const int n, int step)
{
	char buf;
	for (int i = 1; i <= step; i++)
	{
		buf = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buf;
	}
}
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{

	for (int i = 0; i < step; i++)
	{
		int buf = arr[ROWS - 1][COLS - 1];
		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				if ((k == 0) && (j != 0))
				{
					arr[j][k] = arr[j - 1][COLS - 1];
				}
				else arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buf;
	}
}
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	for (int i = 0; i < step; i++)
	{
		double buf = arr[ROWS - 1][COLS - 1];
		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				if ((k == 0) && (j != 0))
				{
					arr[j][k] = arr[j - 1][COLS - 1];
				}
				else arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buf;
	}
}
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	for (int i = 0; i < step; i++)
	{
		char buf = arr[ROWS - 1][COLS - 1];
		for (int j = ROWS - 1; j >= 0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				if ((k == 0) && (j != 0))
				{
					arr[j][k] = arr[j - 1][COLS - 1];
				}
				else arr[j][k] = arr[j][k - 1];
			}
		}
		arr[0][0] = buf;
	}
}

void ShiftLeft(int arr[], const int n, int step)
{
	ShiftRight(arr, n, n - step);
}
void ShiftLeft(double arr[], const int n, int step)
{
	ShiftRight(arr, n, n - step);
}
void ShiftLeft(char arr[], const int n, int step)
{
	ShiftRight(arr, n, n - step);
}
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
}
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
}