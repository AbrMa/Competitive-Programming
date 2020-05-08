#include <iostream>
using namespace std;
int main()
{
	int n,m,steps,ans=0;
	cin >> n >> m;
	steps = n/2 + n%2;
	while (steps <= n && !ans)
	{
		if (steps % m == 0)
			ans = 1;
		else
			steps++;
	}
	if (ans)
		cout << steps << endl;
	else
		cout << "-1" << endl;
	return 0;
}
