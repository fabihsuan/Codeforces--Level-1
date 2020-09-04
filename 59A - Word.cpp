#include <cctype>
#include <iostream>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  int upper = 0;
  int lower = 0;
  for (int i = 0; i < str.length(); i++) {
    if (isupper(str[i])) {
      upper++;
 
    } else if (islower(str[i])) {
      lower++;
    }
  }
 
  for (int j = 0; j < str.length(); j++) {
    if (lower >= upper) {
      if (isupper(str[j])) {
        str[j] = str[j] + 32;
      }
    } else {
      if (islower(str[j])) {
        str[j] = str[j] - 32;
      }
    }
  }
  cout << str << endl;
}
