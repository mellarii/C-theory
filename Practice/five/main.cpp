#include <iostream>

using namespace std;

class Drob {
  private:
  int num = 0;
  int denum = 1;
  public:
  Drob() = default;
  Drob(int num, int denum) {
    this->num = num;
    this->denum = denum;
    if (denum == 0) throw 2;
  }

  Drob operator+(const Drob& other) {
    if (denum != other.denum) throw 1;
    return Drob(num + other.num, denum);
  }

  Drob operator-(const Drob& other) {
    if (denum != other.denum) throw 1;
    return Drob(num + other.num, denum);
  }

  Drob operator*(const Drob& other) {
    return Drob(num * other.num, denum * other.denum);
  }

  friend ostream& operator<<(ostream& os, const Drob& drob) {
    return os << drob.num << "/" << drob.denum;
  }
};

int main() {
  try {
    Drob d1(2,3);
    Drob d2(1,0);

    Drob d3 = d1 + d2;
    Drob d4 = d1 * d2;

    cout << d3 << endl;
    cout << d4 << endl;
  } catch(int err) { 
    if (err == 1) { 
      cout << "Cant do this. " << endl; 
  } else if (err == 2) { 
      cout << "Denum = 0. " << endl;
    } 
  };
  
  return 0;
}