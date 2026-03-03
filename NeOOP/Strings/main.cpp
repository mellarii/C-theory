#include <iostream>
#include <string>

using namespace std;

int main() {
  string word = "Hello World!";
  cin >> word;
  cout << "\n" << word;
  word[0] = 'W';
  cout << "\n" << word;

  cout << "\n";
  return 0;
}
//||По факту класс string это char name[] - тоесть массив символов типа char. Поэтому нам над ним дорступны те операции, которые приминимы для массивов.
//Лежит через подключение библиотеки <string>
//Объявляется ОБЯЗАТЕЛЬНО через ИМЕННО " . . . "