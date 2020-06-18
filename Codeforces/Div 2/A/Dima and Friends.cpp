#include <iostream>
using namespace std;
int main()
{
	int n,no=0,aux,sum=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> aux;
		sum += aux;
	}
	for (int i = 1; i <= 5; i++)
		if ((sum+i) % (n+1) == 1) no++;
	cout << (5-no) << endl;
	return 0;
}
