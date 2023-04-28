#include "Shift.h"

template<typename T>void ShiftRight(T arr[], const int n, int step)
{
	T buf;
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
template<typename T>void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{

	for (int i = 0; i < step; i++)
	{
		T buf = arr[ROWS - 1][COLS - 1];
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

template<typename T>void ShiftLeft(T arr[], const int n, int step)
{
	ShiftRight(arr, n, n - step);
}
template<typename T>void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
}