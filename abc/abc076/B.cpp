#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, K;
  cin >> N >> K;

  int sum = 1;
  int i;
  for (i = 0; i < N; i++) {
    if (sum > K) {
      sum += K;
    } else {
      sum *= 2;
    }
  }

  cout << sum << endl;

  return 0;
}

