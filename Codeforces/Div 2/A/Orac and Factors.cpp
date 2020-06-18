#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first 
#define S second 
#define PB push_back 
#define MP make_pair
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int t,n,k;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		if (n % 2 == 0) n += 2 * k;
		else
		{
			int i;
			for (i = 3; i <= 1000000; i+=2)
				if (n % i == 0) break;
			n += i + 2 * (k - 1);
		}
		cout << n << endl;
	}
	return 0;
}
