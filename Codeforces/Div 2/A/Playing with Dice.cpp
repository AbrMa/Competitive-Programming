#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,ans1=0,ans2=0,ans3=0;
	cin >> a >> b;
	for (int i = 1; i <= 6; i++)
	{
		if (abs(a-i) == abs(b-i)) ans2++;
		else if (abs(a-i) < abs(b-i)) ans1++;
		else if (abs(a-i) > abs(b-i)) ans3++;
	}
	cout << ans1 << " " << ans2 << " " << ans3 << endl;
	return 0;
}
