#include <iostream>
#include <vector>
#include <map>
using namespace std;
 
int isArit(vector<int> &a) {
	if (a.size() == 1)
		return 0;
	bool valid = true;
	int last = a[0], actual = a[1], dif = a[1] - a[0];
	for (int i = 1; i < a.size(); i++) {
		actual = a[i];
		if (actual - last != dif)
			valid = false;
		last = actual;
	}
	if (valid) return dif;
	else return -1;
}
 
int main(){ 
	map<int,vector<int>> x;
	vector<int> ans;
	ans.push_back(0);
	int n, number;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> number;
		x[number].push_back(i);
	}
	for (auto a : x) {
		int arit = isArit(a.second);
		if (arit >= 0) {
			ans[0]++;
			ans.push_back(a.first);
			ans.push_back(arit);
		}
	}
	cout << ans[0] << endl;
	for (int i = 1; i < ans.size(); i+= 2)
		cout << ans[i] << " " << ans[i+1] << endl;
	return 0;
}

//PYTHON3
/*
from collections import OrderedDict
n = int(input())
a = [int(x) for x in input().split()]
values = {}
total = 0
answer = ""

def isArithmetic(indices):
    if len(indices) == 1:
        return 0
    valid = True
    last = indices[0]
    current = indices[1]
    dif = current - last
    for i in range(1, len(indices)):
        current = indices[i]
        if current - last != dif:
            valid = False
        last = current
    if valid:
        return dif
    else:
        return -1

for i in range(n):
    values[a[i]] = []

for i in range(n):
    values[a[i]].append(i)

values = OrderedDict(sorted(values.items()))

for x, indices in values.items():
    valid = isArithmetic(indices)
    if valid >= 0:
        total += 1;
        answer += f"{x} {valid}\n"

print(total)
print(answer)
*/