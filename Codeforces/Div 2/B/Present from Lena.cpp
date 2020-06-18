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
void print(int n)
{
	if (n == 0) cout << "0\n";
	else
	{
		for (int i = 0; i <= n; i++)
			cout << i << " "; 
		for (int i = n - 1; i >= 0; i--)
		{
			cout << i;
			if (i == 0) cout << endl;
			else cout << " ";
		}
	}
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
	{
		for (int j = n - i; j > 0; j--)
			cout << "  ";
		print(i);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - i; j > 0; j--)
			cout << "  ";
		print(i);
	}	
	return 0;
}
