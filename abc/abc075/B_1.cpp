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

  int j;
  int count = 0;
  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      if (S[i].at(j) == '.') {
        if (i - 1 >= 0) {
          if (j - 1 >= 0) {
            if (S[i - 1].at(j - 1) == '#') {
              count++;
            }
          }
          if (j + 1 < W) {
            if (S[i - 1].at(j + 1) == '#') {
              count++;
            }
          }
          if (S[i - 1].at(j) == '#') {
            count++;
          }
        }

        if (j - 1 >= 0) {
          if (S[i].at(j - 1) == '#') {
            count++;
          }
        }
        if (j + 1 < W) {
          if (S[i].at(j + 1) == '#') {
            count++;
          }
        }

        if (i + 1 < H) {
          if (j - 1 >= 0) {
            if (S[i + 1].at(j - 1) == '#') {
              count++;
            }
          }
          if (j + 1 < W) {
            if (S[i + 1].at(j + 1) == '#') {
              count++;
            }
          }
          if (S[i + 1].at(j) == '#') {
            count++;
          }
        }

        S[i].at(j) = '0' + count;
        count = 0;
      }
    }
  }

  for (i = 0; i < H; i++) {
    cout << S[i] << endl;
  }

  return 0;
}

