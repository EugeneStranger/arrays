#include "Sort.h"

template<typename T>void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] += arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] -= arr[j];
			}
		}
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						double buf = arr[k][l] + arr[i][j];
						arr[i][j] = buf - arr[i][j];
						arr[k][l] = buf - arr[k][l];
					}
				}
			}
		}
	}
}