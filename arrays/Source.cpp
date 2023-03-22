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
void Sort(int arr[], const int n);
void UniqueRand(int arr[], const int n);
int Search(int arr[], const int n, int number);
void main()
{
	setlocale(LC_ALL, "");
	const int n = 20;
	int arr[n], step;
	FillRand(arr, n);
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
	//UniqueRand(arr, n);
	Print(arr, n);
	for (int i = 0; i < n; i++)
	{
		if (Search(arr, n, i) > 0) cout << "Элемент " << arr[i] << " повторяется " << Search(arr, n, i) << " раз\n";
	}
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
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
void UniqueRand(int arr[], const int n)
{
	bool res;
		for (int i = 0; i < n;)
		{
			res = true;
			arr[i] = rand() % 10;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])  res = false ;
			}
			if (res) i++;
		}
}
int Search(int arr[], const int n, int number)
{
	int res = 0;
	for (int i = number+1; i < n; i++)
	{
		if (arr[number] == arr[i]) res++;
	}
	if (number > 0)
	{
		for (int i = number-1; i >= 0; i--)
		{
			if (arr[number] == arr[i])
			{
				res = 0;
				break;
			}
		}
	}
	return res;
}
