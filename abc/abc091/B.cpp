#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  vector<string> s(N);
  int i;
  for (i = 0; i < N; i++) {
    cin >> s[i];
  }

  int M;
  cin >> M;
  vector<string> t(M);
  for (i = 0; i < M; i++) {
    cin >> t[i];
  }

  int j;
  int max = 0;
  int count = 0;
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (s[i] == s[j]) {
        count++;
      }
    }
    
    for (j = 0; j < M; j++) {
      if (s[i] == t[j]) {
        count--;
      }
    }

    if (max < count) {
      max = count;
    }
    count = 0;
  }

  cout << max << endl;

  return 0;
}

