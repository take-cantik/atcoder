#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int H, W;
  cin >> H >> W;

  vector<vector<char>> a(H, vector<char>(W));
  int i, j;
  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      cin >> a[i][j];
    }
  }
  
  for (i = 0; i < W + 2; i++) {
    cout << '#';
  }
  cout << endl;

  for (i = 0; i < H; i++) {
    cout << '#';
    for (j = 0; j < W; j++) {
      cout << a[i][j];
    }
    cout << '#' << endl;
  }
  
  for (i = 0; i < W + 2; i++) {
    cout << '#';
  }
  cout << endl;

  return 0;
}

