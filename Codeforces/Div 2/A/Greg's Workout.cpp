#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int n,c=0,bi=0,bk=0,a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (i % 3 == 1) c += a;
		else if (i % 3 == 2) bi += a;
		else if (i % 3 == 0) bk += a;
	}
	if (c >= bk && c >= bi)
		cout << "chest" << endl;
	else if (bi >= c && bi >= bk)
		cout << "biceps" << endl;
	else if (bk >= c && bk >= bi)
		cout << "back" << endl;
	return 0;
}
