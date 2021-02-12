#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int N1, N2, N3, N4;
  N1 = N / 1000;
  N2 = (N % 1000) / 100;
  N3 = (N % 100) / 10;
  N4 = N % 10;

  if ((N1 == N2 && N2 == N3) || (N2 == N3 && N3 == N4)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

