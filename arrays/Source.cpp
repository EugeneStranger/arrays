#include <iostream>;
using namespace std;
using std::cout;
using std::cin;

const int ROWS = 5;
const int COLS = 5;

template <class T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <class T>
void Print(T arr[ROWS][COLS], const int ROWS,  const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}

template <class T>
void FillRand(T arr[], const int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%m;
	}
}
template <class T>
void FillRand(double arr[], const int n, int m, int q)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double((rand() % m)) / q;
	}
}
template <class T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int m)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % m;
		}
	}
}
template <class T>
void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int m, int q)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double((rand() % m)) / q;
		}
	}
}

template <class T>
T Min(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
template <class T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

template <class T>
T Max(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template <class T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

template <class T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <class T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <class T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <class T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <class T>
void ShiftRight(T arr[], const int n, int step)
{
	for (int i = 1; i <= step; i++)
	{
		T buf = arr[n - 1];
		for (int j = n - 1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buf;
	}
}
template <class T>
void ShiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int step)
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

template <class T>
void ShiftLeft(T arr[], const int n, int step)
{
	ShiftRight(arr, n, n - step);
}
template <class T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
}

template <class T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{

			if (arr[j] < arr[i])
			{
				T buf = arr[i] + arr[j];
				arr[i] = buf - arr[i];
				arr[j] = buf - arr[j];
			}
		}
	}
}
template <class T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
						T buf = arr[k][l] + arr[i][j];
						arr[i][j] = buf - arr[i][j];
						arr[k][l] = buf - arr[k][l];
					}
				}
			}
		}
	}
}

template <class T>
void UniqueRand(T arr[], const int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % m;
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
template <class T>
void UniqueRand(T arr[], const int n, int m, int q)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double((rand() % m)) / q;
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
template <class T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
template <class T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS, int q)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique = true;
			do
			{
				unique = true;
				arr[i][j] = double((rand() % (q*1000))) / q;
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

template <class T>
void Search(T arr[], const int n)
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
		if (count) cout << "Значение " << arr[i] << " повторяется " << count << "раз\n";
	}
}
template <class T>
void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
			if (count) cout << "Значение " << arr[i][j] << " повторяется " << count << "раз\n";
		}
	}
}
//#define ARRAYS1
#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS1
	const int n = 10;
	char arr[n];
	int step;
	FillRand(arr, n, 255);
	Print(arr, n);
	cout << "Минимальный элемент массива: " << Min(arr, n) << endl;
	cout << "Максимальный элемент массива: " << Max(arr, n) << endl;
	cout << "Среднее арифметическое всех элементов массива: " << Avg(arr, n) << endl;
	cout << "Сумма всех элементов массива: " << Sum(arr, n) << endl;
	system("pause");
	cout << "Массив из уникальных чисел: \n";
	UniqueRand(arr, n, 255);
	Print(arr, n);
	cout << "Введите шаг сдвига вправо: "; cin >> step;
	ShiftRight(arr, n, step);
	Print(arr, n);
	cout << "Введите шаг сдвига влево: "; cin >> step;
	ShiftLeft(arr, n, step);
	Print(arr, n);
	system("pause");
	cout << "Массив после сортировки: \n";
	Sort(arr, n);
	Print(arr, n);
	system("pause");
	FillRand(arr, n,255);
	Print(arr, n);
	cout << "Поиск повторяющихся элементов массива: \n";
	Search(arr, n);
#endif;
#ifdef ARRAYS2
	char arr2[ROWS][COLS];
	int	step;
	FillRand(arr2,ROWS,COLS, 25);
	Print(arr2, ROWS, COLS);
	cout << "Минимальный элемент массива: " << Min(arr2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: " << Max(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое всех элементов массива: " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Сумма всех элементов массива: " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Введите шаг сдвига вправо: "; cin >> step;
	ShiftRight(arr2, ROWS, COLS, step);
	Print(arr2, ROWS, COLS);
	cout << "Введите шаг сдвига влево: "; cin >> step;
	ShiftLeft(arr2, ROWS, COLS, step);
	Print(arr2, ROWS, COLS);
	system("pause");
	cout << "Массив после сортировки: \n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	system("pause");
	cout << "Поиск повторяющихся элементов массива: \n";
	Search(arr2, ROWS, COLS);
#endif;
}

