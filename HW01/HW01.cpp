#include <iostream>
using namespace std;
//사용자로부터 5개의 숫자를 입력 받습니다
//입력 받은 숫자를 배열에 저장합니다
//배열에 저장된 숫자들의 합계와 평균을 계산합니다.
//계산된 합계와 평균을 출력합니다.
//배열을 인자로 넘겨 받아서 배열 원소들의 합계를 반환하는 함수를 구현해봅니다.
//배열을 인자로 넘겨 받아서 배열 원소들의 평균을 반환하는 함수를 구현해봅니다.
//위에서 만든 합계 함수와 평균 함수를 호출하여 합계와 평균을 출력합니다.

int sum(int arr[], int size)
{
	int f = 0;

	for (int i = 0; i < size; i++)
	{
		f += arr[i];
	}

	return f;

}


int aver(int arr[], int size)
{

	int g;

	g = sum(arr, size) / size;

	return g;

}

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;

	cin >> a >> b >> c >> d >> e;

	int arry[5] = { a, b, c, d, e };

	sum(arry, 5);
	aver(arry, 5);

	cout << "합계는 " << sum(arry, 5) << ", 평균은 " << aver(arry, 5) << endl;

	return 0;

}