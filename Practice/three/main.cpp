#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string func(string str) {
  int len = str.length();
  for (int i = 0; i < len; i++) {
    int f = 0;
    int l = 1;
    if (str[i] == '/') { 
      str.erase(f, l); 
      l = 1;
    }
  }
  string newStr = str;
  return newStr;
};

int main() {
  string temp;
  cin >> temp;

  temp = func(temp);
  cout << temp << endl;
  
  return 0;
};