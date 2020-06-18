#include <iostream>
using namespace std;
int main()
{
	int n,m,aux,ans,mayor=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		int q = 1;
		while (m*q < aux) q++;
		if (mayor <= q) 
		{
			mayor = q;
			ans = i + 1;
		}
	}
	cout << ans << endl;
	return 0;
}
