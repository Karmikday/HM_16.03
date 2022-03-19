#include <iostream>
#include <conio.h>
#include <time.h>
using namespace std;
void ShowMap(int map[3][3])
{
    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
				cout << map[j][i];
		}
			cout << endl;
	}
}
bool Game(int map[3][3],int val)
{
int c = 0, c1 = 0, c2 = 0, c3 = 0;
for (int i = 0; i < 3; i++)
{
	for (int j = 0; j < 3; j++)
	{
		if (map[j][i] == val)
		{
			c++;
		}
		if (map[i][j] == val)
		{
			c1++;
		}
		if (map[j][j] == val)
		{
			c2++;
		}
		if (map[2 - j][j] == 1)
		{
			c3++;
		}
	}
	if (c == 3 || c1 == 3 || c2 == 3 || c3 == 3)
	{
		return true;
		break;
	}
	c = 0;
	c1 = 0,
	c2 = 0;
	c3 = 0;
}
    return false ;
}
int main()
{
	int map[3][3] = { 0 };
	srand(time(0));
	int x = 0,y = 0;
	while (true)
	{
		cout << "Enter coordinate->";
		cin >> x >> y;	
		map[x][y] = 1;
		ShowMap(map);
		if (Game(map,1) == true)  
		{
			cout << "Win!" << endl;
			break;
		}
		cout << "Computer move" << endl;
		do
		{
			x = rand() % 3;
			y = rand() % 3;
		}while (map[x][y] != 0);
		map[x][y] = 2; 
		ShowMap(map);
		if (Game(map,2) == true)
		{
			cout << "Lose!" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}