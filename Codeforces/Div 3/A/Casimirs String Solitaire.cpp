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
        string s;
        int a=0,b=0,c=0;
        cin >> s;
        //cout << s << endl;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                a++;
            }
            else if (s[i] == 'B') {
                b++;
            }
            else {
                c++;
            }
        }
        //cout << a << " " << b << " " << c << endl;
        if (b == a + c) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0;
}