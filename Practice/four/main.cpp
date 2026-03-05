#include <iostream>
#include <iomanip>

using namespace std;

void MySwap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
};

int main() {
  int z, v;
  cout << "First: " << &z << " Second: " << &v << endl;
  cout << "Z: ";
  cin >> z;
  cout << "V: ";
  cin >> v;
  MySwap(z,v);
  cout << "First HEX: " << hex << z << " Second HEX: " << v << endl;
  cout << "First DEC: " << dec << z << " Second DEC: " << v << endl;
  cout << "First OCT: " << oct << z << " Second OCT: " << v << endl;
  return 0;
}