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
