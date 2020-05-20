#include <iostream>
using namespace std;
int main()
{
	int n,ent,sal,ans=0,pas=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> sal >> ent;
		pas -= sal;
		pas += ent;
		ans = max(ans,pas);
	}
	cout << ans << endl;
	return 0;
}
