#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int A, B;
  cin >> A >> B;

  int i;
  int sum = 0;
  for (i = A; i <= B; i++) {
    if (i / 10000 == i % 10 && (i % 10000) / 1000 == (i % 100) / 10) {
      sum++;
    }
  }

  cout << sum << endl;

  return 0;
}

