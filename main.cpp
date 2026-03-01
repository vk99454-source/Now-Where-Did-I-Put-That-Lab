#include <iostream>

#include "src/where.hpp"
using namespace std;

int main() {
  string text = "The quick brown fox";
  cout << where(text, 'b') << endl;
  cout << where(text, "b") << endl;
  cout << where(text, ' ') << endl;
  cout << where(text, "fox") << endl;
  cout << where(text, "bear") << endl;

  return 0;

}
