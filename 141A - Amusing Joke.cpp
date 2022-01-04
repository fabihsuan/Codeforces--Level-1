#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string x, y, xy, z;

  getline(cin, x);
  getline(cin, y);
  xy = x + y;
  getline(cin, z);
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  sort(xy.begin(), xy.end());
  sort(z.begin(), z.end());

  if (xy == z) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}

//2022/01/04
// int main() {
//     string s1, s2, s3;
//     cin >> s1 >> s2 >> s3;

//     unordered_map<char, int> mp;
//     for (auto c : s1) ++mp[c];
//     for (auto c : s2) ++mp[c];
//     for (auto c : s3) --mp[c];

//     for (auto kv : mp) {
//         if (kv.second != 0) {
//             cout << "NO" << endl;
//             return;
//         }
//     }
//     cout << "YES" << endl;

//     return 0;
// }
