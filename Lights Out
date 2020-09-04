#include <iostream>
using namespace std;
 
int main() {
  int times[3][3];
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      cin >> times[i][j];
    }
  }
 
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
      int a = times[i][j];
      if (i - 1 >= 0) {
        a += times[i - 1][j];
      }
      if (j - 1 >= 0) {
        a += times[i][j - 1];
      }
      if (i + 1 < 3) {
        a += times[i + 1][j];
      }
      if (j + 1 < 3) {
        a += times[i][j + 1];
      }
 
      if (a % 2 == 1) {
        cout << 0;
      } else {
        cout << 1;
      }
    }
    cout << endl;
  }
}
