#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
  char line[50];
  int n;
  int t;
  cin >> n >> t;
  cin >> line;
 
  for (int j = 0; j < t; j++) {
    for (int i = 0; i < n - 1; i++) {
      if (line[i] == 'B' && line[i + 1] == 'G') {
        swap(line[i], line[i + 1]);
        i++;
      }
    }
  }
  cout << line << endl;
  return 0;
}
