#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  vector<int> buttom(N);
  int i;
  for (i = 0; i < N; i++) {
    cin >> buttom[i];
  }

  int count = 0;
  for (i = 1; i != 2; count++) {
    i = buttom[i - 1];
    
    if (count > N) {
      count = -1;
      break;
    }
  }

  cout << count << endl;

  return 0;
}

