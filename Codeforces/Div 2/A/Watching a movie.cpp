#include <iostream>
using namespace std;
int main()
{
	int n,x,l,r,current=1,min=0;
	cin >> n >> x;
	while (n--)
	{
		cin >> l >> r;
		while (current + x <= l)
			current += x;
		min += (l-current) + (r-l) + 1;
		current = r + 1;
	}
	cout << min << endl;
	return 0;
}
