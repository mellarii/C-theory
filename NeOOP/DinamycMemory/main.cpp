#include <iostream>

using namespace std;

int main() {
  int *nums = new int [3]; // Создаем указатель (ключевое *), пишем new -> выделяем память на объекты типа int на 3 элемента.
  nums[0] = 45;
  cout << nums[0] << endl;
  delete[] nums; // Удаляем (ключевое delete) переменную (в конкретно этом случае массив) nums. Пишем [] тк nums это массив, если нет то не пишем

  return 0;
}
//||Динамическая память и массивы
//