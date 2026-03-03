#include <iostream>
#include <string>

using namespace std;

class PC {
  protected:
  int diagonal;
  string os;
  public:
  PC(int diagonal, string os) { this->diagonal = diagonal; this->os = os;};

  void get_info() {
    cout << "OS: " << os << ". Diagonal: " << diagonal;
  }
};

class Laptop: public PC {
  private:
  float weight;
  public: 
  Laptop(int diagonal, string os, float weight): PC(diagonal, os) { this->weight = weight; }

  void get_info() {
    PC::get_info(); //Обращаемся к классу родителя ( PC:: ) к методу гет инфо
    cout << ". Weight: " << weight << "." << endl;
  }
};

int main() {

  Laptop mac(16, "Mac", 1.5);
  mac.get_info();

  return 0;
}

// Классы наследники имеют информацию и функционал класса - родителя, но не наоборот. Классы наследники одного родителя не влияют на функционал друг друга.
// class NameP { . . . };
// class NameS: public **открываем родителя для ребенка для полей public и prtected** NameP { . . . };
// Создание конструктора для наследника с использованием полей класса родителя:
//   Для этого, при написании конструктора потомка, после скелета конструктора и до начала реализации необходимо  "обратиться к конструктору родителя", написать : и его скелет. Т.е. constrSonName(...) : sklNameP { . . . };
//   Если же поля, необходимые для конструктора находятся под protected, в не под private, можно использовать обычный конструктор с обращением к переменным напрямую / через this