#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int left, right;
  int leftsumone = 0;
  int leftsumzero = 0;
  int rightsumone = 0;
  int rightsumzero = 0;
  int leftcount;
  int rightcount;

  for (int i = 0; i < n; i++) {
    cin >> left >> right;
    if (left > right) {
      leftsumone++;
      rightsumzero++;
    } else if (left < right) {
      rightsumone++;
      leftsumzero++;
    } else if (left == 0 && right == 0) {
      leftsumzero++;
      rightsumzero++;
    } else if (left == 1 && right == 1) {
      leftsumone++;
      rightsumone++;
    }
  }
  if (leftsumone > leftsumzero) {
    leftcount = leftsumzero;
  } else if (leftsumone < leftsumzero) {
    leftcount = leftsumone;
  } else {
    leftcount = leftsumone;
  }
  if (rightsumone > rightsumzero) {
    rightcount = rightsumzero;
  } else if (rightsumone < rightsumzero) {
    rightcount = rightsumone;
  } else {
    rightcount = rightsumone;
  }

  cout << leftcount + rightcount << endl;
  return 0;
}




//2022.01.01
// version 2
//#include <iostream>

// using namespace std;

// int main() {
//   int n, a, b;
//   int lopen = 0, ropen = 0, lclose = 0, rclose = 0;
//   cin >> n;

//   for (int i = 0; i < n; i++) {
//     cin >> a >> b;
//     if (a == 0) {
//       lclose++;
//     } else {
//       lopen++;
//     }
//     if (b == 0) {
//       rclose++;
//     } else {
//       ropen++;
//     }
//   }
//   a = min(lclose, lopen);
//   b = min(rclose, ropen);

//   cout << a + b << endl;

//   return 0;
// }
