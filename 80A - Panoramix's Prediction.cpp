#include <iostream>
using namespace std;

int main() {
  int n;
  int m;
  int x[] = {2, 3, 5, 7};
  cin >> n >> m;

  if (m == 3) {
    cout << "YES" << endl;
    return 0;
  }
  for (int j = 1; j < m - n; j++) {
    bool isPrime = true;
    for (int k = 0; k < 4; k++) {
      if (n + j <= x[k]) break;
      if ((n + j) % x[k] == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << "NO" << endl;
      return 0;
    }
  }
  if (m == 5 || m == 7) {
    cout << "YES" << endl;
    return 0;
  }
  if (m % 2 == 0 || m % 3 == 0 || m % 5 == 0 || m % 7 == 0) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
