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
int moneyMax(vi a, int dis, int n)
{
	int money = 0;
	while (dis > 0 && n > 0)
	{
		int mx = 0, idx = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] > mx)
			{
				idx = i;
				mx = a[i];
			}
		}
		a[idx]--;
		money += mx;
		n--;
		dis--;
	}
	return money;
	
}
int moneyMin(vi a,  int dis, int n)
{
	int money = 0;
	while (dis > 0 && n > 0)
	{
		int mn = INT_MAX, idx = 0;
		for (int i = 0; i < a.size(); i++)
		{
			if (a[i] < mn && a[i] > 0)
			{
				idx = i;
				mn = a[i];
			}
		}
		a[idx]--;
		money += mn;
		n--;
		dis--;
	}
	return money;

}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m,dis=0;
	cin >> n >> m;
	vi a(m);
	for (int i = 0; i < m; i++)
	{
		cin >> a[i];
		dis += a[i];
	}
	int mx, mn;
	mx = moneyMax(a, dis, n);
	mn = moneyMin(a, dis, n);
	cout << mx << " " << mn << endl;
	return 0;
}
