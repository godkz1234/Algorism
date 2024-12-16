#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region 투 포인터
	// 두 개의 포인터를 활용해서 배열의 요소를 효과적으로
	// 탐색하는 알고리즘입니다.

	// 1. 시작점과 끝나는 지점이 첫번째 원소를 가리키도록 합니다.

	// 2. 현재 부분합이 m과 같다면 count를 증가시킵니다.

	// 3. 현재 부분합이 m보다 작다면 end를 1 증가시킵니다.

	// 4. 현재 부분합이 m보다 크거나 같다면 start를 1 증가시킵니다.

	int count = 0;
	int sum = 0; // 부분합

	int start = 0; // 시작점
	int end = 0; // 끝나는 지점

	int m = 5; // 연속적인 수열의 개수

	int list[SIZE] = { 1,2,3,2,5 };

	while (start <= end)
	{
		if (sum >= m) // 4번 조건
		{
			sum -= list[start++];
		}
		else if (end > SIZE) // 버퍼 오버플로우를 방지하기 위해 SIZE를 넘어갔을때 강제 종료
		{
			break;
		}
		else // 3번 조건
		{
			sum += list[end++];
		}
		if (sum == m) // 2번 조건
		{
			count++;
		}
	}

	cout << "count의 값 : " << count << endl; // 출력

#pragma endregion


	return 0;
}

