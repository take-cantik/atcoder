#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int f = 0;
  for (int n = N; n != 0; n /= 10) {
    f += n % 10;
  }

  if (N % f == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

