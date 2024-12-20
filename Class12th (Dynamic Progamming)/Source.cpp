﻿#include <iostream>

#define SIZE 100001

using namespace std;



int Fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int Memoization(int n, int memo [])
{
	if (n <= 0)
	{
		return 0;
	}
	else if (n <= 2)
	{
		return 1;
	}
	if (memo[n] != 0)
	{
		return memo[n];
	}

	return memo[n] = Memoization(n - 1, memo) + Memoization(n - 2, memo);
}

int main()
{
#pragma region 동적 계획법
	// 특정 범위까지의 값을 구하기 위해서 그것과
	// 다른 범위까지 값을 이용하여 효율적으로 값을 
	// 구하는 알고리즘입니다.

	// 메모이제이션
	// 프로그램이 동일한 계산을 반복해야 할 때, 이전에
	// 계산한 값을 메모리에 저장함으로써 동일한 계산을
	// 반복 수행하는 작업을 제거하여 프로그램의 실행 속도를 
	// 향상시키는 기법입니다.

	int memo[SIZE] = { 0 , };

	int x;

	cout << "숫자 입력 : ";

	cin >> x;

	cout << Memoization(x) << " " << endl;

	cout << Fibonacci(x) << " ";



#pragma endregion


	return 0;
}
