#include <iostream>
#include <string>
using namespace std;
int main()
{
	//
	int rep = 0,n;
	cin >> n;
	string s;
	cin >> s;
	s.append(".");
	for (int i = 1; i < s.size() - 1; i++)
	       if (s[i] == s[i-1]) rep++;
	cout << rep << endl;
	return 0;
}

