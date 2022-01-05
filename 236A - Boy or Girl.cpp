#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  s.erase(unique(s.begin(), s.end()), s.end());
  if (s.length() % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}


//2022/01/04
// #include <algorithm>
// #include <iostream>
// #include <map>
// #include <string>
// using namespace std;

// int main() {
//   string s;
//   cin >> s;

//   map<char, int> mp;
//   for (auto c : s) ++mp[c];

//   if (mp.size() % 2 == 0) {
//     cout << "CHAT WITH HER!" << endl;
//   } else {
//     cout << "IGNORE HIM!" << endl;
//   }
//   return 0;
// }
