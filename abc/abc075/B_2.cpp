#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  int i;
  for (i = 0; i < H; i++) {
    cin >> S[i];
  }

  int j, k, l, x, y;
  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      if (S[i][j] == '.') {
        S[i][j] = '0';
        for (k = -1; k <= 1; k++) {
          for (l = -1; l <= 1; l++) {
            x = i + k;
            y = j + l;
            if (x >= 0 && x < H && y >= 0 && y < W) {
              if (S[x][y] == '#') {
                S[i][j]++;
              }
            }
          }
        }
      }
    }
  }

  for (i = 0; i < H; i++) {
    cout << S[i] << endl;
  }

  return 0;
}

