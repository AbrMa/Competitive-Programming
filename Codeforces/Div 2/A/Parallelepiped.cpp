#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,x,y,z;
	cin >> a >> b >> c;
	x = sqrt((a*c)/b);
	y = sqrt((b*c)/a);
	z = sqrt((a*b)/c);
	cout << (4 * (x+y+z)) << endl;
	return 0;
}
