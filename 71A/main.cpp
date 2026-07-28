#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
  cin >> n;

  for (int i=0; i< n; i++) {
    string word;
    cin >> word;
    int len = word.size();
    if (len > 10) {
      char first = word[0];
      char last = word[len-1];
      int middle = len - 2;
      
      // same as printf("%s%d%s\n", first, middle, last); (?)
      cout << first << middle << last << "\n";
    }
    else {
      cout << word << "\n";
    }
  }
  return 0;
}
