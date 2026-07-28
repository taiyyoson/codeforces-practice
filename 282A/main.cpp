#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int x = 0;
  cin >> n;
  string input; 
  for (int i=0; i < n; i++) {
    cin >> input;
    if (input.find("++") != string::npos) {
      x++;
    } else if (input.find("--") != string::npos) {
      x--;
    }
  }

  cout << x;
  return 0;
}
