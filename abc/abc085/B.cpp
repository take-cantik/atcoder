#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  vector<int> d(N);
  int i;
  for (i = 0; i < N; i++) {
    cin >> d[i];
  }

  int j, tmp;
  for (i = 0; i < N; i++) {
    for (j = i + 1; j < N; j++) {
      if (d[i] > d[j]) {
        tmp = d[i];
        d[i] = d[j];
        d[j] = tmp;
      }
    }
  }

  int count = 0;
  int memory;
  for (i = 0; i < N; i++) {
    if (memory != d[i]) {
      count++;
    }
    memory = d[i];
  }

  cout << count << endl;

  return 0;
}

