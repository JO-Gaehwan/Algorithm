#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// two pointer method
string reverse_word(string str) {
  int left = 0, right = str.length() - 1;
  while (left < right) {
    swap(str[left], str[right]);
    ++left;
    --right;
  }

  return str;
}

int main() {
  int n;
  scanf("%d\n", &n);
  for (int i = 0; i < n; ++i) {
    string state;
    getline(cin, state);
    stringstream ss;
    ss << state;

    string str;

    while (ss >> str) {  // or while (getline(ss, str, ' ')) {
      string rev = reverse_word(str);
      cout << rev << " ";
    }
    cout << endl;
  }

  return 0;
}