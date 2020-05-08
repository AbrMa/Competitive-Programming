#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;
int main()
{
	int n,aux;
	vector<int> m;
	vector<int> pe;
	vector<int> p;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> aux;
		if (aux == 1) p.push_back(i);
		else if (aux == 2) m.push_back(i);
		else if (aux == 3) pe.push_back(i);
	}
	n = min(m.size(),min(pe.size(),p.size()));
	if (n == 0)
		cout << "0" << endl;
	else 
	{
		cout << n << endl;
		for (int i = 0; i < n; i++)
			cout << p[i] << " " << m[i] << " " << pe[i] << endl;
	}
	return 0;
}
