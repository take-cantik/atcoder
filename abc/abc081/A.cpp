#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int s123;

  cin >> s123;

  cout << (s123 / 100) + ((s123 % 100) / 10) + (s123 % 100 % 10) << endl;

  return 0;
}

