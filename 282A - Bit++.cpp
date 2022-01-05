#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s;
  int plus = 0;
  int minus = 0;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "X++" || s == "++X") {
      plus++;
    } else if (s == "X--" || s == "--X") {
      minus++;
    }
  }
  cout << plus - minus << endl;
  return 0;
}

//2022/01/05

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//   int times = 0;
//   int n;
//   cin >> n;
//   string s;
//   for (int i = 0; i < n; i++) {
//     cin >> s;
//     if (s == "++X" || s == "X++") {
//       times++;
//     } else if (s == "--X" || s == "X--") {
//       times--;
//     }
//   }
//   cout << times << endl;

//   return 0;
// }
