#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define MAX 1000000
int main () {
	long long mod = 1073741824, sum = 0;
	mod *= (1 << 30);
	vector<int> mem(MAX + 2);
	for (int i = 1; i <= MAX; i++)
		for (int j = i; j <= MAX; j += i)
			mem[j]++;
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i <= a; i++)
		for (int j = 1; j <= b; j++)
			for (int k = 1; k <= c; k++) 
				sum += mem[i * j * k] % mod;
	cout << sum << endl;	
	return 0;
}
