#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int N;
  cin >> N;

  int i;
  bool is_four = false;
  string S;
  for (i = 0; i < N; i++) {
    cin >> S;
    if (S == "Y") {
      is_four = true;
      break;
    }
  }

  if (is_four) {
    cout << "Four" << endl;
  } else {
    cout << "Three" << endl;
  }

  return 0;
}

