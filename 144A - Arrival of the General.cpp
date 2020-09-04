#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 1 || n % 2 != 0) {
    cout << -1 << endl;
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    cout << i + 1 << " " << i << " ";
    i++;
  }
  cout << endl;
  return 0;
}
