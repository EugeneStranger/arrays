#include<iostream>
using namespace std;
using std::cout;
using std::cin;

const int ROWS = 3;
const int COLS = 4;

void FillRand( int arr[], const int n);
void FillRand( double arr[], const int n);
void FillRand( char arr[], const int n);
void FillRand( int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand( double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand( char arr[ROWS][COLS], const int ROWS, const int COLS);

void UniqueRand( int arr[], const int n);
void UniqueRand( double arr[], const int n);
void UniqueRand( char arr[], const int n);
void UniqueRand( int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand( double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand( char arr[ROWS][COLS], const int ROWS, const int COLS);

template  <typename T>void Print(const T arr[], const int n);
template  <typename T>void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T Sum(const T arr[], const int n);
unsigned char Sum(unsigned char arr, const int n);
template <typename T>T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS);
unsigned char Sum(unsigned char arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>double Avg(const T arr[], const int n);
template <typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>T minValueIn(const T arr[], const int n);
template <typename T>T maxValueIn(const T arr[], const int n);
template <typename T>T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);
template <typename T>T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void Sort(T arr[], const int n);
template <typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>void shiftRight(T arr[], const int n, int number_of_shifts);
template <typename T>void shiftRight( T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
template <typename T>void shiftleft(T arr[], const int n, int number_of_shifts);
template <typename T>void shiftLeft( T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template <typename T>T Search(T arr[], const int n);
template <typename T>T Search( T arr[ROWS][COLS], const int ROWS, const int COLS);

//#define ARRAYS1

#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
	int number_of_shifts;
#ifdef ARRAYS1
	const int n = 10;
	int number_of_shifts;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "Массив после сортировки: \n";
	Print(arr, n);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	Search(arr, n);

	cout << "\n\n";

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(d_arr, SIZE) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(d_arr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr, SIZE) << endl;
	Sort(d_arr, SIZE);
	cout << "Массив после сортировки: \n";
	Print(d_arr, SIZE);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(d_arr, SIZE, number_of_shifts);
	Print(d_arr, SIZE);
	Search(d_arr, SIZE);
#endif;
#ifdef ARRAYS2
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	cout << "Массив после сортировки: \n";
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов вправо: "; cin >> number_of_shifts;
	shiftRight(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << "Введите количество сдвигов влево: "; cin >> number_of_shifts;
	shiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	Search(i_arr_2, ROWS, COLS);
#endif;

}
void FillRand( int arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void FillRand( double arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 32 767 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		arr[i] /= 5;
	}
}
void FillRand( unsigned char arr[], const int n)
{
	//rand();	//возвращает псевдослучайное число в диапазоне от 0 до 255 (MAX_RAND)
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 255;
	}
}
void FillRand( int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 4;
		}
	}
}
void FillRand( double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double((rand() % 1000000)) / 1000;
		}
	}
}
void FillRand( unsigned char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (122 - rand() % (122 - 97 + 1));
		}
	}
}

void UniqueRand( int arr[], const int n)
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
void UniqueRand( double arr[], const int n)
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
void UniqueRand( char arr[], const int n)
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
void UniqueRand( int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void UniqueRand( double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void UniqueRand( char arr[ROWS][COLS], const int ROWS, const int COLS)
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

template <typename T>void Print(const T arr[], const int n)
{
	//Вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template <typename T>void Print(const T arr[ROWS][COLS], const int ROWS, const int COLS)
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

template <typename T>T Sum(const T arr[], const int n)
{
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
unsigned char Sum(const unsigned char arr[], const int n)
{
	//Вычисление суммы элементов массива:
	unsigned char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template <typename T>T Sum(const T arr[ROWS][COLS], const int ROWS, const int COLS)
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
unsigned char Sum(const unsigned char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	unsigned char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template <typename T>double Avg(const T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template <typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template <typename T>T minValueIn(const T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template <typename T>T maxValueIn(const T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template <typename T>T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
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
template <typename T>T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
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

template <typename T>void Sort( T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		//Счетчик 'i' выбирает элемент, в который нужно поместить минимальное значение из перебираемых
		for (int j = i + 1; j < n; j++)
		{
			//Счетчик 'j' перебирает элементы, в поисках минимального
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				T buf = arr[i];
				arr[i] = arr[j];
				arr[j] = buf;
			}
		}
	}
}
template <typename T>void Sort( T arr[ROWS][COLS], const int ROWS, const int COLS)
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
						T buf = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buf;
					}
				}
			}
		}
	}
}

template <typename T>void shiftRight( T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
template <typename T>void shiftRight( T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
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

template <typename T>void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	shiftRight(arr, n, n - number_of_shifts);
}
template <typename T>void shiftLeft( T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftRight(arr, ROWS, COLS, ROWS*COLS - number_of_shifts);
}

template <typename T>T Search(T arr[], const int n)
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
		if (count) cout << "Значение a[" << i << "]=" << arr[i]<< " повторяется " << count << "раз\n";
	}
	return 0;
}
template <typename T>T Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
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
			if (count) cout << "Значение a[" << i << "]=" << arr[i][j]<< " повторяется " << count << "раз\n";
		}
	}
	return 0;
}