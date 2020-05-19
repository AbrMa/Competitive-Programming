#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int ans = 0,aux,i;
		vector<int> ones,twos;
		for (int i = 0; i < n; i++)
		{
			cin >> aux;
			if (aux % 3 == 0) ans++;
			else if (aux % 3 == 1) ones.push_back(aux);
			else twos.push_back(aux);
		}
		for (i = 0; i < min(ones.size(),twos.size()); i++) ans++;
		ans += (ones.size() - i) / 3; 
		ans += (twos.size() - i) / 3; 
		cout << ans << endl;
	}
	return 0;
}
