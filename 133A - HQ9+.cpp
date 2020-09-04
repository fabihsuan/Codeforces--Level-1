#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  bool get = false;
  sort(s.begin(), s.end());
  for (int i = 0; i < s.length(); i++) {
    if ((int(s[i]) == 72 || int(s[i]) == 57 || int(s[i]) == 81) &&
        (int(s[i]) > 33 || int(s[i]) < 126)) {
      get = true;
      cout << "YES" << endl;
      return 0;
    } else {
      get = false;
    }
  }
  if (get != true) {
    cout << "NO" << endl;
  }
  return 0;
}
