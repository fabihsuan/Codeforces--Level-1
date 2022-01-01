#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  int x;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    cin >> x;
    a.push_back(x);
  }

  auto p = minmax_element(a.rbegin(), a.rend());
  int yy = p.first - a.rbegin();   // min
  int zz = p.second - a.rbegin();  // max

  int ans = yy + n - 1 - zz;
  if (yy > zz) {
    ans--;
  }
  cout << ans << endl;
  return 0;
}

//version 2

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;

  int x;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    cin >> x;
    a.push_back(x);
  }

  auto findmax = max_element(a.begin(), a.end());
  int max = findmax - a.begin();

  auto findmin = min_element(a.rbegin(), a.rend());
  int min = findmin - a.rbegin();

  int ans = max + min;

  if (ans >= n) {
    ans--;
  }

  cout << ans << endl;

  return 0;
}
