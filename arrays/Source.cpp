#include <iostream>;
using namespace std;
void ShiftLeft(int arr[],int n);
void ShiftRight(int arr[], int n);
//#define MIN_MAX
void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	//cout << "Введите элементы массива: ";
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> arr[i];
	//}
	//cout << endl;
	//rand(); // rand возвращает псевдослучайное число в диапазоне от 0 до 32677 (MAX_RAND)

#ifdef	MIN_MAX;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%100;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]<<"\t";
	}
	cout << endl;
	int sum = 0, min=arr[0], max = arr[0];
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Сумма всех элементов массива равна: " << sum << "\n";
	cout << "Среднее арифметическое всех элементовмассива: " << double(sum) / n << "\n";
	cout << "Минимальный элемент массива: " << min << "\n";
	cout << "Максимальный элемент массива: " << max << "\n";
#endif;
	
	ShiftRight(arr, n);
	cout << "\n";
	for (int i = 0; i < n; i++)
	{
		cout << "--------"; 
	}
	cout << "\n";
	ShiftLeft(arr, n);
}
void ShiftRight(int arr[], int n)
{		
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;// rand() % 100;
	}
	cout << "\nИсходный массив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int buf = 0 , m;
	cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> m;
	for (int i = 1; i <= m; i++)
	{
		buf = arr[n-1];
		for (int j = n-1; j > 0; j--)
		{
			arr[j] = arr[j-1];
		}
		arr[0] = buf;
	}
	cout << "\nМассив после сдвига:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void ShiftLeft(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;//rand() % 100;
	}
	cout << "\nИсходный массив:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int buf = 0, m;
	cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> m;
	for (int i = 1; i <= m; i++)
	{
		buf = arr[0];
		for (int j = 1; j < n; j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[n - 1] = buf;
	}
	cout << "\nМассив после сдвига:\n";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}

