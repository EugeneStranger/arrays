#include <iostream>;
using namespace std;
void Print(int arr[], const int n);
void FillRand(int arr[], const int n);
int Min(int arr[], const int n);
int Max(int arr[], const int n);
int Sum(int arr[], const int n);
double Average(int arr[], const int n);
void ShiftLeft(int arr[],const int n, int step);
void ShiftRight(int arr[],const int n, int step);
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n]={0,1,2,3,4,5,6,7,8,9}, step;
	//FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма всех элементов массива: " << Sum(arr, n) << endl;
	cout << "Среддне арифметическое всех элементов массива: " << Average(arr, n) << endl;
	cout << "Минимальный элемент массива: " << Min(arr, n)<<endl;
	cout << "Максимальный элемент массива: " << Max(arr, n)<<endl;
	cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> step;
	ShiftRight(arr, n, step);
	cout << "Массив после сдвига вправо на " << step << "\n";
	Print(arr, n);
	cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> step;
	ShiftLeft(arr, n , step);
	cout << "Массив после сдвига влево на " << step << "\n";
	Print(arr, n);
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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
double Average(int arr[], const int n)
{
	int sum = 0;
	for (int i=0;i<n;i++)
	{
		sum += arr[i];
	}
	return double(sum)/n;
}
int Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min =arr[i];
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
void ShiftLeft(int arr[],const int n, int step)
{
	ShiftRight(arr, n, n - step);
}

