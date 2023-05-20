#include <iostream>
#include <ctime>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int ROWS = 5, COLS = 9;

	int arr[ROWS][COLS];

	for (int i = 0; i != ROWS; i++)
	{
		for (int j = 0; j != COLS; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i != ROWS; i++)
	{
		for (int j = 0; j != COLS; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}