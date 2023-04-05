#include <iostream>;
using namespace std;
using std::cout;
using std::cin;

const int ROWS = 5;
const int COLS = 5;

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

void FillRand(int arr[], const int n, int minRand, int maxRand);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Min(int arr[], const int n);
double Min(double arr[], const int n);
char Min(char arr[], const int n);
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Min(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Max(int arr[], const int n);
double Max(double arr[], const int n);
char Max(char arr[], const int n);
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Max(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
char Avg(char arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

void ShiftRight(int arr[], const int n, int step);
void ShiftRight(double arr[], const int n, int step);
void ShiftRight(char arr[], const int n, int step);
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int step);

void ShiftLeft(int arr[],const int n, int step);
void ShiftLeft(double arr[], const int n, int step);
void ShiftLeft(char arr[], const int n, int step);
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int step);
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int step);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

int Search(int arr[], const int n);
int Search(double arr[], const int n);
int Search(char arr[], const int n);
int Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Search(char arr[ROWS][COLS], const int ROWS, const int COLS);

//#define ARRAYS1
#define ARRAYS2
void main()
{
	setlocale(LC_ALL, "");
	//cout << char(122);
#ifdef ARRAYS1 	
	const int n = 10;
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
	int step = 0;
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Символьный массив из уникальных значений\n";
	UniqueRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Минимальный элемент массива: "<<Min(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальный элемент массива: "<<Max(i_arr_2, ROWS, COLS) << endl;
	cout << "Сумма всех элементов массива: "<<Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое всех элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Массив после сортировки: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
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
		arr[i] = rand()%255;
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
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = (122 - rand()%(122-97+1));
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
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
double Min(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
char Min(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}
char Min(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
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
double Max(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
char Max(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
char Max(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
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
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	char sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr,n) / n;
}
char Avg(char arr[], const int n)
{
	return Sum(arr, n) / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS,COLS) / (ROWS*COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
char Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{

	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
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
void ShiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{

	for (int i = 0; i < step; i++)
	{
		int buf = arr[ROWS-1][COLS - 1];
		for (int j = ROWS-1; j >=0; j--)
		{
			for (int k = COLS - 1; k >= 0; k--)
			{
				if ((k == 0) && (j != 0))
				{
					arr[j][k] = arr[j - 1][COLS - 1];
				}
				else arr[j][k] = arr[j][k-1];
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
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS*ROWS - step);
}
void ShiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
}
void ShiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int step)
{
	ShiftRight(arr, ROWS, COLS, COLS * ROWS - step);
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
							arr[i][j] ^= arr[k][l];
							arr[k][l] ^= arr[i][j];
							arr[i][j] ^= arr[k][l];
						}
					}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
						arr[k][l] = buf -  arr[k][l];
					}
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
						arr[i][j] ^= arr[k][l];
						arr[k][l] ^= arr[i][j];
						arr[i][j] ^= arr[k][l];
					}
				}
			}
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
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
int Search(int arr[ROWS][COLS], const int ROWS, const int COLS) 
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
				if (count) printf("Значение %i повторяется %i раз\n", arr[i][j], count);
				//cout << "Значение a[" << i << "]=" << arr[i][j]<< " повторяется " << count << "раз\n";
			}
		}
	return 0;
}
double Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
			if (count) printf("Значение %i повторяется %i раз\n", arr[i][j], count);
			//cout << "Значение a[" << i << "]=" << arr[i][j]<< " повторяется " << count << "раз\n";
		}
	}
	return 0;
}
char Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
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
			//if (count) printf("Значение %i повторяется %i раз\n", arr[i][j], count);
			if (count) cout << "Значение "<<arr[i][j]<< " повторяется " << count << "раз\n";
		}
	}
	return 0;
}
