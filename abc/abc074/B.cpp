#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, K;
  cin >> N >> K;

  int i, x;
  int sum = 0;
  for (i = 0; i < N; i++) {
    cin >> x;

    if (x > K / 2) {
      x = K - x;
    }
    
    sum += 2 * x;
  }

  cout << sum << endl;

  return 0;
}

