#include <iostream>
#include <sstream>
#include <string>

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

int empty() {
  if (pos == 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int num = 0;
  // cin >> num; 개행문자 \n을 직후 getline에서 받아버린다.
  scanf("%d\n", &num);
  for (int i = 0; i < num; ++i) {
    string cmd;
    getline(cin, cmd);
    stringstream ss(cmd);
    string com;
    int push_num = 0;

    ss >> com;

    if (com == "push") {
      while (ss.peek() == ' ') {
        ss.ignore();
      }
      if (ss >> push_num) {
        push(push_num);
      }
    } else if (com == "top") {
      cout << top() << endl;
    } else if (com == "pop") {
      cout << pop() << endl;
    } else if (com == "empty") {
      cout << empty() << endl;
    } else if (com == "size") {
      cout << size() << endl;
    } else {
      // do nothing
    }
  }
  return 0;
}