#include <iostream>
using namespace std;

int stack[10000 + 10];
int pos = 0;
void push(int a) {
  stack[pos] = a;
  pos++;
}

int top() {
  if (pos != 0) {
    return stack[pos - 1];
  } else {
    return -1;
  }
}

int pop() {
  if (pos != 0) {
    pos--;
    return stack[pos];
  } else {
    return -1;
  }
}

int size() { return pos; }
int main() {
  int num = 0;
  cin >> num;
  cout << "number is " << num << endl;
}