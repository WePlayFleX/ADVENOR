#include <iostream>
#include <process.h>
#include <conio.h>

using namespace std;

#pragma warning(disable : 4996)

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	while (dir != '\r')
	{
		cout << "\nYour coordinates: " << x << ", " << y;
		if (x < 5 || x > 15)
		{
			cout << "\nWatch out - dragons! ";
		}
		cout << "\nChoose direction (n, s, e, w): ";

		dir = getche();
		switch (dir)
		{
		case 'n':
			y--;
			break;
		case 's':
			y++;
			break;
		case 'e':
			x++;
			break;
		case 'w':
			x--;
			break;
		default:
			cout << "Try once more\n ";
			break;
		}
	}

	system("pause");
	return 0;
}