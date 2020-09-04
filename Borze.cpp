#include <iostream>
#include <string>
using namespace std;
 
int main() {
  string a;
  cin >> a;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] == '.') {
      cout << 0;
    } else if (a[i] == '-' && a[i + 1] == '.') {
      cout << 1;
      i++;
    } else if (a[i] == '-' && a[i + 1] == '-') {
      cout << 2;
      i++;
    }
  }
  cout << endl;
  return 0;
}
