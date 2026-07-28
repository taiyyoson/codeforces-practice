#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  int res = 0;
  for (int &x : a) cin >> x;
  int cutoff = a[k-1];
  for (int i=0; i < n; i++) {
    if (a[i] >= cutoff && a[i] > 0) res++;
    else break;
  }
  
  cout << res;

  return 0;
}
