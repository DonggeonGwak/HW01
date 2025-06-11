#include <iostream>

using namespace std;


int sum(int* arr, int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += arr[i];
	}
	return total;
}


double aver(int* arr, int size)
{
	return static_cast<double>(sum(arr, size)) / size;
}


void sortAsc(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void sortDsc(int* arr, int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int a;
	cout << "숫자의 개수를 입력하세요: ";
	cin >> a;

	int* arr = new int[a];

	cout << a << "개의 정수를 입력하세요: ";
	for (int i = 0; i < a; i++)
	{
		cin >> arr[i];
	}

	cout << "합계: " << sum(arr, a) << endl;
	cout << "평균: " << aver(arr, a) << endl;

	sortAsc(arr, a);
	cout << "오름차순: ";
	printArray(arr, a);
	
	sortDsc(arr, a);
	cout << "내림차순: ";
	printArray(arr, a);

	delete[] arr;
	arr = nullptr;

	return 0;
}
