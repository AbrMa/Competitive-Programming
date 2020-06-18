#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n,min=INT_MAX,flag=0,index=0;
	cin >> n;
	vector<int> c(n);
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
		if (c[i] < min)
		{
			min = c[i];
			index = i + 1;
		}
	}
	for (int i = 0; i < n; i++)
		if (min == c[i]) flag++;
	if (flag == 1) cout << index << endl;
	else cout << "Still Rozdil" << endl;
	return 0;
}
