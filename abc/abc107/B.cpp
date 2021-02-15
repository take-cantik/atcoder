#include <bits/stdc++.h>
using namespace std;

int index_side_blank(vector<vector<char>> a, int h, int w) {
  int i, j;
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      if (a[i][j] == '#') {
        break;
      }
      if (j == w - 1) {
        return i;
      }
    }
  }

  return -1;
}

void remove_side_blank(vector<vector<char>> &a, int h, int w, int index) {
  int i, j;
  for (i = 0; i < w; i++) {
    for (j = index; j < h - 1; j++) {
      a[j][i] = a[j + 1][i];
    }
  }
}

int index_vertical_blank(vector<vector<char>> a, int h, int w) {
  int i, j;
  for (i = 0; i < w; i++) {
    for (j = 0; j < h; j++) {
      if (a[j][i] == '#') {
        break;
      }
      if (j == h - 1) {
        return i;
      }
    }
  }

  return -1;
}

void remove_vertical_blank(vector<vector<char>> &a, int h, int w, int index) {
  int i, j;
  for (i = 0; i < h; i++) {
    for (j = index; j < w - 1; j++) {
      a[i][j] = a[i][j + 1];
    }
  }
}

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

  int side_index, vertical_index;
  int ahi = 0;
  while ((side_index = index_side_blank(a, H, W)) != -1) {
    remove_side_blank(a, H, W, side_index);
    H--;
  }

  while ((vertical_index = index_vertical_blank(a, H, W)) != -1) {
    remove_vertical_blank(a, H, W, vertical_index);
    W--;
  }

  for (i = 0; i < H; i++) {
    for (j = 0; j < W; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }

  return 0;
}

