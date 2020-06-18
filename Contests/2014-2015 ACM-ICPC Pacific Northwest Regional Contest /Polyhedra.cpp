#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t, v, e;
  cin >>t;
  vector<int> ve(t);
  for(int i=0;i<t;i++){
    cin >> v >>e;
    ve[i] = 2-v+e;
  }
  for(int e:ve)
    cout << e <<"\n";
}