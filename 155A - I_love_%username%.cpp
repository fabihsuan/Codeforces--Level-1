#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> num;
  int a;
  for (int i = 0; i < n; i++) {
    cin >> a;
    num.push_back(a);
  }
  int count = 0;
  int low = num[0];
  int high = num[0];

  for (int i = 1; i < n; i++) {
    if (num[i] < low) {
      low = num[i];
      count++;
    } else if (num[i] > high) {
      high = num[i];
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
