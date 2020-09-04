#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string str;
  for (int i = 0; i < n; i++) {
    cin >> str;
    for (int j = 0; j < 1; j++) {
      if (str.length() < 11) {
        cout << str << endl;
      } else {
        cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
      }
    }
  }
  return 0;
}
