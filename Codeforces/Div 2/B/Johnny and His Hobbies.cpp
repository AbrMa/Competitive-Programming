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
	int n,t,aux,cont;
	cin >> t;
	while (t--)
	{
		cin >> n;
		int arr[1027] = {0},ans=-1;
		for (int i = 0; i < n; i++)
		{
			cin >> aux;
			arr[aux]++;
		}
		if (n % 2 == 1) cout << ans << endl;
		else
		{
			for (int i = 1; i <= 2048 && ans==-1; i++)
			{
				cont = 0;
				for (int j = 0; j <= 1024; j++)
				{
					if (arr[j] && (j^i) <= 1024) 
					{
						if(arr[j^i]) cont++;
						else break;
					}
				}	
				if (cont == n) ans = i; 
			}
			cout << ans << endl;
		}	
	}
	return 0;
}
