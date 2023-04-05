#include <iostream>
#include "Search.h"
#include "stdafx.h"


int Search(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before) continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count) printf("�������� %i ����������� %i ���\n", arr[i], count);
		//cout << "�������� a[" << i << "]=" << arr[i]<< " ����������� " << count << "���\n";
	}
	return 0;
}
int Search(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before) continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count) printf("�������� %i ����������� %i ���\n", arr[i], count);
		//cout << "�������� a[" << i << "]=" << arr[i]<< " ����������� " << count << "���\n";
	}
	return 0;
}
int Search(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before) continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count) printf("�������� %i ����������� %i ���\n", arr[i], count);
		//cout << "�������� a[" << i << "]=" << arr[i]<< " ����������� " << count << "���\n";
	}
	return 0;
}
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; k == i ? l < j : l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
			}
			if (met_before) continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count) printf("�������� %i ����������� %i ���\n", arr[i][j], count);
			//cout << "�������� a[" << i << "]=" << arr[i][j]<< " ����������� " << count << "���\n";
		}
	}
}
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; k == i ? l < j : l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
			}
			if (met_before) continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			if (count) printf("�������� %i ����������� %i ���\n", arr[i][j], count);
			//cout << "�������� a[" << i << "]=" << arr[i][j]<< " ����������� " << count << "���\n";
		}
	}
}
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for (int k = 0; k <= i; k++)
			{
				for (int l = 0; k == i ? l < j : l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						met_before = true;
						break;
					}
				}
			}
			if (met_before) continue;
			int count = 0;
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] == arr[k][l])
					{
						count++;
					}
				}
			}
			//if (count) printf("�������� %i ����������� %i ���\n", arr[i][j], count);
			if (count) cout << "�������� " << arr[i][j] << " ����������� " << count << "���\n";
		}
	}
}