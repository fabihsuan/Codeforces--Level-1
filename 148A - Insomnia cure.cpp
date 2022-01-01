#include <iostream>
using namespace std;

int main() {
  int a, b, c, d, e;

  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  cin >> e;
  int count = 0;

  for (int i = 1; i <= e; i++) {
    if (i == a || i % a == 0) {
      count++;
    } else if (i == b || i % b == 0) {
      count++;
    } else if (i == c || i % c == 0) {
      count++;
    } else if (i == d || i % d == 0) {
      count++;
    }
  }

  cout << count << endl;
  return 0;
}

//2022.01.01
//edit version 
// #include <iostream>

// using namespace std;

// int main() {
//   int a, b, c, d, e;
//   int count = 0;

//   cin >> a;
//   cin >> b;
//   cin >> c;
//   cin >> d;
//   cin >> e;

//   for (int i = 1; i <= e; i++) {
//     if (i % a == 0) {
//       count++;
//     } else if (i % b == 0) {
//       count++;
//     } else if (i % c == 0) {
//       count++;
//     } else if (i % d == 0) {
//       count++;
//     }
//   }
//   cout << count << endl;
//   return 0;
// }
