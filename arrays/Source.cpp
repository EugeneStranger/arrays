#include <iostream>;
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	cout << "������� �������� �������: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	int sum = 0, min=arr[0], max = arr[0];
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "����� ���� ��������� ������� �����: " << sum << "\n";
	cout << "������� �������������� ���� ����������������: " << double(sum) / n << "\n";
	cout << "����������� ������� �������: " << min << "\n";
	cout << "������������ ������� �������: " << max << "\n";

}

