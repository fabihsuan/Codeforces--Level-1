#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  int plus = 0;
  int minus = 0;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "X++" || s == "++X") {
      plus++;
    } else if (s == "X--" || s == "--X") {
      minus++;
    }
  }
  cout << plus - minus << endl;
  return 0;
}
