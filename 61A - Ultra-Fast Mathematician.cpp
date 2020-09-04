#include <iostream>
using namespace std;

int main() {
  string x;
  string y;
  cin >> x;
  cin >> y;

  for (int i = 0; i < x.length(); i++) {
    if (x[i] == y[i]) {
      cout << 0;
    } else {
      cout << 1;
    }
  }
  cout << endl;
}
