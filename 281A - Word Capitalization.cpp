#include <cctype>
#include <iostream>
using namespace std;
 
int main() {
  string str;
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    if (islower(str[0])) {
      str[0] = str[0] - 32;
    }
  }
  cout << str << endl;
}
