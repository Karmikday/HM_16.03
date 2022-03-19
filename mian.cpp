#include <iostream>
using namespace std;
int main()
{
	const int N = 8;
	int desk[N][N];
	int steps[8][2] = { {1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2} };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			desk[i][j] = 0;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << desk[i][j] << " ";
		}
		    cout << "\n";
	}
}