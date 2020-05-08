#include <bits/stdc++.h>
using namespace std;
int main()
{
	string sum;
	cin >> sum;
	vector<int> num;
	for (int i = 0; i < sum.size(); i++)
		if (sum[i] != '+')
			num.push_back((int)sum[i] - (int)'0');
	sort(num.begin(),num.end());
	for (int i = 0; i < num.size() - 1; i++)
		cout << num[i] << "+";
	cout << num[num.size() - 1] << endl;
	return 0;
}
