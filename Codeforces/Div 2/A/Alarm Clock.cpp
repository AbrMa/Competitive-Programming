#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,t;
	long long int sum,aux,q;	
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c >> d;
		if (a <= b) cout << b << endl;
		else if (c - d <= 0) cout << "-1" << endl;
		else
		{
			sum = 0, aux = 0;
			sum += b;
			aux = sum;
			q = (a - b) / (c - d); 
			sum += q * (c - d);
			aux += q * c;
			if (sum < a)
				aux += c;
			cout << aux << endl;
		}
	}
	return 0;
}
