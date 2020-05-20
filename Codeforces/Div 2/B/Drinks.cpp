#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double n,tot = 0,drink,ans;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> drink;
		tot += drink;
	}
	ans = tot / n; 
	cout << fixed << setprecision(12) << ans << endl;
	return 0;
}
