#include <iostream>

using namespace std;

void AddArray()
{
	int Size = 10;
	int* Numbers = new int[Size];
	int NewNumber = 0;

	for (int i = 0; i < Size; i++)
	{
		Numbers[i] = i + 1;
	}

	int* Temp = new int[Size + 1];

	for (int i = 0; i < Size; i++)
	{
		Temp[i] = Numbers[i];
	}

	cout << "�߰��� �迭�� ������ ���ڸ� �Է��Ͻÿ� : ";
	cin >> NewNumber;
	Temp[Size] = NewNumber;

	delete[] Numbers;

	Numbers = Temp;

	for (int i = 0; i < Size + 1; i++)
	{
		cout << Numbers[i] << endl;;
	}
}

int main()
{
	AddArray();

	return 0;
}