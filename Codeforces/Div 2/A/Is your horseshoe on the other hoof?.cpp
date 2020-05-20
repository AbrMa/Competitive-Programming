#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,ans=0;
	cin >> a >> b >> c >> d;
	if (a == b || a == c || a == d) ans++;
	if (b == c || b == d) ans++;
	if (c == d) ans++;
	cout << ans << endl;
	return 0;
}
