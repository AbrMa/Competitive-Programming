#include <bits/stdc++.h>
using namespace std;
#define __ ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair

int main () {__
    int t;
    cin >> t;
    while (t--) {
        int n;
        deque <int> dq;
        cin >> n;
        int elemento;
        for (int i = 0; i < n; i++) {
            cin >> elemento;
            if (dq.empty()) {
                dq.push_back(elemento);
            }
            else {
                if (elemento <= dq.front()) {
                    dq.push_front(elemento);
                }
                else {
                    dq.push_back(elemento);
                }
            }
        }
        for (int i = 0; i < dq.size(); i++) {
            cout << dq[i];
            if (i == n - 1) {
                cout << endl;
            }
            else {
                cout << " ";
            }
        }
    }
    return 0;
}