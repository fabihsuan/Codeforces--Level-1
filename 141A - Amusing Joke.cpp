#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x, y, xy, z;

  getline(cin, x);
  getline(cin, y);
  xy = x + y;
  getline(cin, z);
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  sort(xy.begin(), xy.end());
  sort(z.begin(), z.end());

  if (xy == z) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
