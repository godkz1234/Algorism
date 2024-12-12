#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 거품 정렬
	// 서로 인접한  두 원소를 비교하여 정렬하는 알고리즘입니다.

	int arr[SIZE] = { 5,1,4,7,2 };

	cout << "정렬 전 : ";
	for (int i = 0; i < 5; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < SIZE - 1; i++)
	{
		for (int j = 0; j < (SIZE - i) - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
	
	for (const int & element : arr)
	{
		cout << element << " ";
	}

#pragma endregion

	return 0;
}

