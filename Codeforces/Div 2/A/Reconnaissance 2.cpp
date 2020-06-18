#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,min=INT_MAX,l,r;
	cin >> n;
	vector<int> a(n+2);
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	a[0] = a[n];
	a[n+1] = a[1];
	for (int i = 1; i <= n; i++)
	{
		if (abs(a[i] - a[i-1]) < min)
		{
			min = abs(a[i] - a[i-1]);
			l = i-1;
			r = i;
		}
		else if (abs(a[i] - a[i+1]) < min)
		{
			min = abs(a[i] - a[i+1]);
			l = i+1;
			r = i;
		}
	}
	if (l == 0) l = n;
	if (r == n+1) r = 1;
	cout << l << " " << r << endl;
	return 0;
}
