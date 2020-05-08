#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	cin >> n;
	if (stoi(n) >=0)
		cout << abs(stoi(n))<< endl;
	else
	{
		string s1 = n.substr(0,n.size()-1);
		string s2 = n.substr(0,n.size()-2);
		s2.push_back(n[n.size()-1]);
		cout << max(stoi(s1), stoi(s2)) << endl;
	}
	return 0;
}