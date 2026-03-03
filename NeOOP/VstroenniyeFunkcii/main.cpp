#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {

  string str1 = "Hello";
  string str2 = "World";

  //||Фцнкции из cstring
  str1.append(str2); // То же самое что str1 + str2
  str1.pop_back(); // Удаляем последний символ строки
  str1.push_back('!'); // Добавляем символ (обязательно в '') в конец строки
  str1.resize(5); // Устанавливаем строке определенную длинну (если больше чем установили, обрезает)
  cout << str1 << " " << str1.length() << endl; // Выводим длинну строки

  //||Фцнкции из cmath
  cout << pow(2, 3) << endl; // Функция pow(a, b) dозводит число a в степень - число b
  cout << abs(-3) << endl; // Функция abs(-a) берет модуль числа a
  // так же по анологии есть фнкции sin, cos
  cout << sqrt(16) << endl; // Функция sqrt(a) берет квадратный корень числа a
  cout << ceil(1.78) << endl; // Функция ceil(a) округляет число а. Всегда в БОЛЬШУЮ сторону (1.0000000001 -> 2.0)
  cout << floor(1.07) << endl; // Функция аналогичная ceil, но округляет всегда в МЕНЬШУЮ сторону (1.999999 -> 1.0)
  cout << round(1.5) << endl; // Функция аналогичная ceil и floor, но округляет всегда адекватно, к ближайшему необходимому 

  return 0;
}