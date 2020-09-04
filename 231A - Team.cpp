#include <iostream>
using namespace std;

int main() {
  int n, x, y, z;
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> x >> y >> z;
    if (x + y + z >= 2) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
