#include <iostream>
using namespace std;
int main()
{
	int n,a,b,c,ans=0;
	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		if (a + b + c >= 2) ans++;
	}
	cout << ans << endl;
	return 0;
}
