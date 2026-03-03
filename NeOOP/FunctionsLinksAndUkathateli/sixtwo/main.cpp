#include <iostream>

using namespace std;

void minimal(int* arr, int len) { // Берем по указателю а не по ссылке что бы иметь возможность реализовать сдвиг по указателю. *arr - указатель на первый элемент массива; *(arr+1) - на второй и тд
  int min = *arr;
  for (int i = 0; i < len; i++) {
    if (min > *(arr+i)) { // *(arr+i) --- arr[i]
      min = *(arr+i);
    }
  }
  cout << "Minimal: " << min << endl;
};

int main() {
  int arr[] = {6, 7, 3, -5, 5};
  minimal(arr, 5);

  return 0;
}