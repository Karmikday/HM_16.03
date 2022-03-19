#include <iostream>
using namespace std;
const int N = 8;
int desk[N][N];
int steps[8][2] = { {1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2} };
bool Horse(int x,int y)
{
	desk[x][y] = 10;
	int x1, y1, j;
	j = 0;
	for (int i = 0; i < N; i++)
	{
		x1 = x + steps[i][0];
		y1 = y + steps[i][1];
		if ((x1<0) || (x1 >= N) || (y1 < 0) || (y1 >= N))
		{
			continue;
		}
		j++;
		desk[x1][y1] = j;
	}
	return false;
}
void PrintDesk()
{
for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf(" %2d", desk[i][j]);
		}
		    cout << "\n";
	}
}
int main()
{
	int PointX,PointY;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			desk[i][j] = 0;
		}
	}
	cout << "First horizontal point(1-8)->";
	cin >> PointX;
	cout << "First vertical point(1-8)->";
	cin >> PointY;
	cout << endl;
	Horse(PointX, PointY);
	PrintDesk();
	
}