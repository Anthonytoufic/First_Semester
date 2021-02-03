//Multi_DimentionalArray
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <iomanip>
using namespace std;

int main()
{
    srand((unsigned)time(0));
	int ar[2][3];
	int i, j;
	int sr[2] = { 0,0 }, sc[3] = { 0,0,0 },sum=0;
	for (int i = 0; i <= 1; i++)
	{
		for (int j = 0; j<=2; j++)
		{
			ar[i][j] = 1+rand() % 100;
		}
	}
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			sr[i] = sr[i] + ar[i][j];
			sc[j] = sc[j] + ar[i][j];
			sum = sum + ar[i][j];

		}
	}
	for (i = 0; i <= 1; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			cout << setw(8) << ar[i][j] << setw(8);
		}
		cout << sr[i];
		cout << endl;
	}
		for (j = 0; j <= 2; j++)
		{
			cout <<setw(8)<< sc[j]<<setw(8);
		}
		cout << sum << endl;
	system("pause");
	return 0;
}
