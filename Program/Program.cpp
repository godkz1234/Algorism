#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 선택 정렬
	// 주어진 리스트 중에 최소값을 찾아서 맨 앞에 위치한
	// 결과를 교체하는 방식으로 정렬하는 알고리즘입니다.

	int list[SIZE] = { 9, 2, 13, 1 ,5 };
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (list[i] > list[j])
			{
				std::swap(list[i], list[j]);
			}
		}
	}

	cout << "결과 : ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << list[i] << " ";
	}
#pragma endregion


	return 0;
}

