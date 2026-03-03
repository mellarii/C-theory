#include <iostream>
#include <string>

using namespace std;

enum Options {
  open = 1,
  close,
  wait,
  del
};

struct File {
  float weight;
  string name;
  Options options;
};

int main() {
  File my_file;
  my_file.weight = 1.5f;
  my_file.name = "test.txt";
  my_file.options = Options::open;

  if (my_file.options = Options::close) {
    cout << "File is close" << endl;
  }

  my_file.options = Options::open;
  if (my_file.options = Options::open) {
    cout << "File is open" << endl;
  }

  return 0;
}

//||Перечисления - enum - enumeration
// Объявляется как enum Name { someWariants };
// С помощью этого даем объекту различные заранее прописанные варианты значения:
//    strName name
//    name.strParametr = EnumName::enumParametr;
// При выводе параметра перечисления будет выведено численное порядковое значение этого параметра (начиная с 0, либо с того числа, которое мы присвоили первому варианту).
// Параметр можно менять в ходе программы как обычную переменную