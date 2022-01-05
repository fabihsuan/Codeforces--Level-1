#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1, str2;
  getline(cin, str1);
  getline(cin, str2);
  int l = str1.length();

  transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
  transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

  for (int i = 0; i < l; i++) {
       if (int(str1[i]) > int(str2[i])) {
      cout << 1 << endl;
      return 0;
    } else if (int(str1[i]) < int(str2[i])) {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
//2022/01/05
// #include <algorithm>
// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;

// int main() {
//   string s1, s2;
//   cin >> s1;
//   cin >> s2;

//   for (int i = 0; i < s1.length(); i++) {
//     if (s1[i] < 97) {
//       s1[i] += 32;
//     }
//     if (s2[i] < 97) {
//       s2[i] += 32;
//     }
//   }

//   if (s1 == s2) {
//     cout << 0 << endl;
//   } else if (s1 > s2) {
//     cout << 1 << endl;
//   } else {
//     cout << -1 << endl;
//   }
//   return 0;
// }
