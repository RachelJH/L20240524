#include <iostream>

using namespace std;

void AddArray()
{
	int Size = 10;
	int* Numbers = new int[Size];
	int RandomIndex = 0;
	int NewNumber =0;
	for (int i = 0; i < Size; i++)
	{
		Numbers[i] = i + 1;
	}

	int* Temps = new int[Size + 1];
	

	RandomIndex = rand() % Size + 1;

	for (int i = 0; i < RandomIndex; i++) 
	{
		Temps[i] = Numbers[i];
	}
	cin >> NewNumber;
	Temps[RandomIndex] = NewNumber;
	
	for (int i = RandomIndex; i < Size; i++)
	{
		Temps[i + 1] = Numbers[i];
	}


	delete[] Numbers;
	Numbers = Temps;

	for (int i = 0; i < Size+1; i++)
	{
		cout << Numbers[i] << endl;
	}
	delete[] Numbers;
}

int main()
{
	srand(time((time_t*)nullptr));
	AddArray();

	return 0;
}