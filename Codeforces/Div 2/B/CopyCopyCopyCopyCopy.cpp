#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <utility>
#include <set>
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
	int t,n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		set<int> nums;
		for (int i = 0; i < n; i++)
		{
			int aux;
			cin >> aux;
			nums.insert(aux);
		}
		cout << nums.size() << endl;
	}
	return 0;
}