#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int i, j, A;
  int min = 50;
  for (i = 0; i < N; i++) {
    cin >> A;

    for (j = 0; A % 2 == 0; j++) {
      A /= 2;
    }

    if (min > j) {
      min = j;
    }
  }

  cout << min << endl;

  return 0;
}

