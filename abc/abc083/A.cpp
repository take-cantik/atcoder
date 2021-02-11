#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  
  int left = A + B;
  int right = C + D;

  if (left > right) {
    cout << "Left" << endl;
  } else if (left < right) {
    cout << "Right" << endl;
  } else {
    cout << "Balanced" << endl;
  }

  return 0;
}

