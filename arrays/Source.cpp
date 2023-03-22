#include <iostream>;
using namespace std;

const int ROWS = 3;
const int COLS = 4;

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);


void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);


int Min(int arr[], const int n);
int Min(double arr[], const int n);
int Min(char arr[], const int n);

int Max(int arr[], const int n);
int Max(double arr[], const int n);
int Max(char arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);


double Average(int arr[], const int n);
double Average(double arr[], const int n);
char Average(char arr[], const int n);

void ShiftRight(int arr[], const int n, int step);
void ShiftRight(double arr[], const int n, int step);
void ShiftRight(char arr[], const int n, int step);

void ShiftLeft(int arr[],const int n, int step);
void ShiftLeft(double arr[], const int n, int step);
void ShiftLeft(char arr[], const int n, int step);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);

int Search(int arr[], const int n);
int Search(double arr[], const int n);
int Search(char arr[], const int n);

//#define ARRAYS1
#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
#ifdef ARRAYS1 	
	const int n = 10;
	int arr[n], step;
	/*Print(arr, n);
	cout << "Сумма всех элементов массива: " << Sum(arr, n) << endl;
	cout << "Среддне арифметическое всех элементов массива: " << Average(arr, n) << endl;
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
	cout << "Среднее значение: " << Average(char_arr, SIZE) << endl;
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
#endif;
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand-minRand)+minRand;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double((rand() % 1000000))/1000;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = (rand()%255);
	}
}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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


int Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int Min(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int Min(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int Max(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int Max(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int Max(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum +=arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}


double Average(int arr[], const int n)
{
	int sum = 0;
	for (int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	return double(sum)/n;
}
double Average(double arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return double(sum) / n;
}
char Average(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum / n;
}


void ShiftRight(int arr[], const int n, int step)
{	
	int buf;
	for (int i = 1; i <= step; i++)
	{
		buf = arr[n-1];
		for (int j = n-1; j > 0; j--)
		{
			arr[j] = arr[j-1];
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

void ShiftLeft(int arr[],const int n, int step)
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


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] += arr[j];
				arr[j] = arr[i]-arr[j];
				arr[i] -= arr[j];
			}
		}
	}
}
void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}


void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
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
void UniqueRand(char arr[], const int n)
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
		if (count) printf("Значение %i повторяется %i раз\n", arr[i], count);
			//cout << "Значение a[" << i << "]=" << arr[i]<< " повторяется " << count << "раз\n";
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
		if (count) printf("Значение %i повторяется %i раз\n", arr[i], count);
		//cout << "Значение a[" << i << "]=" << arr[i]<< " повторяется " << count << "раз\n";
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
		if (count) printf("Значение %i повторяется %i раз\n", arr[i], count);
		//cout << "Значение a[" << i << "]=" << arr[i]<< " повторяется " << count << "раз\n";
	}
	return 0;
}
