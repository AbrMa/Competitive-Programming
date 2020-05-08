#include <iostream>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x3,y3,x4,y4,d;
	cin >> x1 >> y1 >> x2 >> y2;
	if (x1 == x2)
	{
		d = abs(y1-y2);
		x3 = x1 + d;
		y3 = y1;
		x4 = x2 + d;
		y4 = y2;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}
	else if (y1 == y2)
	{
		d = abs(x2-x1);
		x3 = x1;
		y3 = y1 + d;
		x4 = x2;
		y4 = y2 + d;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}
	else
	{
		if (x1 < x2 && y1 < y2)
		{
			x3 = x1;
			y3 = y2;
			x4 = x2;
			y4 = y1;
			if (abs(y1-y3) == abs(x1-x4))
				cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
			else
				cout << "-1" << endl;
		}
		else
		{
			x3 = x1;
			y3 = y2;
			x4 = x2;
			y4 = y1;
			if (abs(y2-y1) == abs(x2-x3))
				cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
			else
				cout << "-1" << endl;
		}
	}
	return 0;
}
