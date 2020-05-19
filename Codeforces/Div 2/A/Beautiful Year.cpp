#include <iostream>
#include <vector>
using namespace std;
bool by(int n)
{
	bool valid = true;
	string num = to_string(n);	
	if (num[0] == num[1] || num[0] == num[2] || num[0] == num[3])
		valid = false;
	if (num[1] == num[2] || num[1] == num[3])
		valid = false;
	if (num[2] == num[3])
		valid = false;
	return valid;
}
int main()
{
	vector<int> year(100000);
	for (int i = 0; i < 100000; i++) year[i] = i;
	int y;
	cin >> y;
	for (int i = y + 1; i < 100000; i++)
		if (by(year[i]))
		{
			cout << year[i] << endl;
			break;
		}
	return 0;
}
