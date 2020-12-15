#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,aux;
	cin >> n;
	vector<int> e, o;
	for (int i = 0; i < n; i++)
	{
		cin >> aux;
		if (aux % 2 == 0)
			e.push_back(i+1);
		else
			o.push_back(i+1);
	}
	if (e.size() == 1)
		cout << e[0] << endl;
	else
		cout << o[0] << endl;
	return 0;
}