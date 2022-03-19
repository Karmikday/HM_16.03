#include <iostream>
using namespace std;
int main()
{
	int map[3][3] = { 0 };
	int x = 0,y = 0;
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
	}
}