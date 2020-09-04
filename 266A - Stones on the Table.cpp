#include <iostream>
using namespace std;
 
int main() {
  int take = 0;
  int n;
  string s;
  cin >> n;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == s[i + 1]) {
      take++;
       }
  }
  cout << take << endl;
}
