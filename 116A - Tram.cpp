#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sum = 0;
  int largest = 0;
  int exit, enter;
  for (int i = 0; i < n; i++) {
    cin >> exit >> enter;
    sum += (-exit + enter);
    if (sum > largest) {
      largest = sum;
    }
  }
  cout << largest << endl;
  return 0;
}
