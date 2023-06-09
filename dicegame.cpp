#include <bits/stdc++.h>

using namespace std;

int main() {

  srand(time(NULL));
  int a = rand() % 6 + 1;
  int b = rand() % 6 + 1;

  cout << "Rolling dice..." << endl;
  cout << "Die 1:" << a << endl;
  cout << "Die 2:" << b << endl;
  cout << "Total value:" << a + b << endl;

  if (a + b > 7) {
    cout << "You won" << endl;
  } else {
    cout << "You lost" << endl;
  }
}