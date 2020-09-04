#include <iostream>
using namespace std;
 
int main() {
  int num;
  int x;
  int y;
  for (int i = 1; i < 6; i++) {
    x = i;
    for (int j = 1; j < 6; j++) {
      cin >> num;
      y = j;
      if (num == 1) {
        cout << abs(x - 3) + abs(y - 3) << endl;
      }
    }
  }
  return 0;
}
