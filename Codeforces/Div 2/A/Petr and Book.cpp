#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,i=0;
	cin >> n;
	vector<int> p(7);
	for (int i = 0; i < 7; i++)
		cin >> p[i];
	while (n > 0)
	{
		n -= p[i];
		i++;
		i%=7;
	}
	if (i == 0) cout << "7" << endl;
	else cout << i << endl;
	return 0;
}
