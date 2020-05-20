#include <iostream>
using namespace std;
int main()
{
	int n,ans=0,best,worst,aux;
	cin >> n;
	cin >> best;
	worst = best;
	for (int i = 1; i < n; i++)
	{
		cin >> aux;
		if (best < aux)
		{
			ans++;
			best = aux;
		}
		if (aux < worst)
		{
			ans++;
			worst = aux;
		}
	}
	cout << ans << endl;
	return 0;
}
