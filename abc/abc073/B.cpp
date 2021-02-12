#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int i;
  int l, r;
  int sum = 0;
  for (i = 0; i < N; i++) {
    cin >> l >> r;
    sum += r - l + 1;
  }

  cout << sum << endl;

  return 0;
}

