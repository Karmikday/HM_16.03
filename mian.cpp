#include <iostream>
using namespace std;
int main()
{
	int map[3][3] = { 0 };
	int x = 0,y = 0;
	int c = 0, c1 = 0, c2 = 0,c3=0;
	while (true)
	{
		cout << "Enter coordinate->";
		cin >> x >> y;	
		map[x][y] = 1;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << map[j][i];
			}
			cout << endl;
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (map[j][i] == 1)
				{
					c++;
				}
				if (map[i][j] == 1)
				{
					c1++;
				}
				if (map[j][j] == 1)
				{
					c2++;
				}
				if (map[2-j][j] == 1)
				{
					c3++;
				}
			}
			if (c == 3 || c1 == 3 || c2 == 3 || c3 == 3)
			{
				cout << "You Win!<3" << endl;
				break;
			}
			c = 0;
			c1 = 0, 
			c2 = 0;
			c3 = 0;
		}
	}
}