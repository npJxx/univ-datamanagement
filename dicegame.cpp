#include <bits/stdc++.h>

using namespace std;

int main() {

  srand(time(NULL));
  int a = rand() % 6 + 1;
  int b = rand() % 6 + 1;

  string name;

  cout << "What is your name?" << endl;
  cin >> name;
  cout << "Hello," << name << "!" << endl;

  cout << "Rolling dice..." << endl;
  cout << "Die 1:" << a << endl;
  cout << "Die 2:" << b << endl;
  cout << "Total value:" << a + b << endl;

  if (a + b > 7) {
    cout << name << " won" << endl;
  } else {
    cout << name << " lost" << endl;
  }
}