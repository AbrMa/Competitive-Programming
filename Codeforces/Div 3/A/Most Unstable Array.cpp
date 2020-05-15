#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, m, t, sum;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n >> m;
		sum = 0;
		if (n == 1) cout << "0" << endl;
		else if (n == 2) cout << m << endl;
		else cout << (m*2) << endl;
	}
	return 0;
}
