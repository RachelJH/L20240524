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

	cout << "추가된 배열에 저장할 숫자를 입력하시오 : ";
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