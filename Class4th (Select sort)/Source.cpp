#include <iostream>

using namespace std;

#define SIZE 5

int main()
{
#pragma region ���� ����
	// �־��� ����Ʈ �߿� �ּҰ��� ã�Ƽ� �� �տ� ��ġ��
	// ����� ��ü�ϴ� ������� �����ϴ� �˰����Դϴ�.

	int list[SIZE] = { 9, 2, 13, 1 ,5 };

	for (int i = 0; i < SIZE; i++)
	{
		int min = list[i];

		int select = i;

		for (int j = i + 1; j < SIZE; j++)
		{
			if (min > list[j])
			{
				min = list[j];
				select = j;
			}
		}

		std::swap(list[i], list[select]);
	}

	cout << "��� : ";

	for (const int& element : list)
	{
		cout << element << " ";
	}
#pragma endregion


	return 0;
}

