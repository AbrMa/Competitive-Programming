#include <iostream>
#include <unordered_map>
#define TAM 1000000
using namespace std;
int main() {
	int sieve[TAM + 1] = {0};
	for (int x = 2; x <= TAM; x++) {
		if (sieve[x]) continue;
		for (int u = 2*x; u <= TAM; u += x) {
			sieve[u] = 1;
		}
	}
	unordered_map<long long,int> tp;
	for (long long i = 2; i <= TAM; i++)
		if (!sieve[i])
			tp[i*i]++;
	long long n, num;
	cin >> n;
	while (n--) {
		cin >> num;
		if (tp[num]) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}