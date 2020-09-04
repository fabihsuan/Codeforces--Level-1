#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int n;
  int x;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    sum += x;
  }
  cout << fixed << setprecision(12) << double(sum) / n << endl;
}
