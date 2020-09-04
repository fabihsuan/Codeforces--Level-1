#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  int drink, slice, gram;

  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  drink = k * l / nl / n;
  slice = c * d / n;
  gram = p / np / n;
  vector<int> x = {drink, slice, gram};
  cout << *min_element(begin(x), end(x)) << endl;
  
  return 0;
}
