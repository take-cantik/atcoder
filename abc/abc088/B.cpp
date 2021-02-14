#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  vector<int> a(N);
  int i;
  for (i = 0; i < N; i++) {
    cin >> a[i];
  }

  int j, tmp;
  for (i = 0; i < N; i++) {
    for (j = i + 1; j < N; j++) {
      if (a[i] < a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  vector<int> point(2, 0);
  for (i = 0; i < N; i++) {
    point[i % 2] += a[i];
  }

  cout << point[0] - point[1] << endl;

  return 0;
}

