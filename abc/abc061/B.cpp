#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N, M;
  cin >> N >> M;

  int i, j, a, b;
  vector<int> num(N, 0);
  for (i = 0; i < M; i++) {
    cin >> a >> b;
    num[a - 1]++;
    num[b - 1]++;
  }

  for (i = 0; i < N; i++) {
    cout << num[i] << endl;
  }

  return 0;
}

