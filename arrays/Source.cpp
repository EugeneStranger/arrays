#include <iostream>;
using namespace std;
//#define RIGHT
#define LEFT
void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//cout << "Введите элементы массива: ";
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> arr[i];
	//}
	//cout << endl;
	//rand(); // rand возвращает псевдослучайное число в диапазоне от 0 до 32677 (MAX_RAND)
	
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
	int m = 0;
	int buf;
	
#ifdef RIGHT;
	cout << "Введите число, на которое нужно сдвинуть элементы массива вправо: "; cin >> m;
	for (int i = 0; i < n-m; i++)
	{
		buf = arr[i];
		arr[i] = arr[m+i];
		arr[m+i] = buf;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
#endif;	
#ifdef LEFT;
	cout << "Введите число, на которое нужно сдвинуть элементы массива влево: "; cin >> m;
	for (int i = m; i < n; i++)
	{
		buf = arr[i-m];
		arr[i-m] = arr[i];
		arr[n - m] = buf;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
#endif;	

}

