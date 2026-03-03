#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

  /*ofstream file("test.txt", ios_base::out);//Output File Stream - объект на базе записывания в файл
  if(file.is_open()) { // Проверка на то, открыт ли файл или нет функцией is_open
    file << "Hello World"; // Пишем почти что так же, как и вывод в консоль, но вместо cout пишем название ПЕРЕМЕННОЙ в которой открыли файл
    file.close(); // Закрываем файл функцией close
  } */

  ifstream file("test.txt"); // Таким способом всегда открываем файл ТОЛЬКО на чтение, после запятой параметры не нужны
  if(file.is_open()) {
    char temp[100];
    //file >> temp; // !Считываем с первой строки до пробела
    file.getline(temp, 100); // В переменную записываем 100 символов из файла. Пееменаая ОБЯЗАНА являться массивом символов, а не обычной строкой.
    cout << temp << endl;
    file.close();
  }

  return 0;
}
//|| Работа с Файлами
// Для работы с файлом создаем объект с типом из библиотеки fstream, а далее
// ofstream **type file("...", ios_base::out) **ojectname("**fileToOpenName", ios_base::**WhatToDoWithFile)
// Если файла с указанным названием нет он создастся автоматически.
// После запятой мы пишем что мы будем делать с файлом, который мы открыли
// 1. ofstream . . . out - для записи чего-либо