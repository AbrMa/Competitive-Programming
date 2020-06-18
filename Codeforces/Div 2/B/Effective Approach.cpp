#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long int n,m,q,v=0,p=0,aux,num[1000005]={0};
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> aux;
		num[aux] = i;
	}
	cin >> m;
	while (m--)
	{
		cin >> q;
		v += num[q];
		p += n + 1 - num[q];
	}
	cout << v << " " << p << endl;
	return 0;
}
