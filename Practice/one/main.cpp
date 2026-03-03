#include <iostream>

using namespace std;

class Matrix {
  private:
  int rows;
  int cols;
  int** Data;

  public:
  Matrix(int rows, int cols, double value) {
    this->rows = rows;
    this->cols = cols;
    Data = new int*[rows];
    for (int i = 0; i < rows; i++) {
      Data[i] = new int[cols];
      for (int j = 0; j < cols; j++) {
         Data[i][j] = (int)value;
      }
    }
  };

  void set(int row, int col, double value) {
    Data[row-1][col-1] = (int)value;
  };

  int get(int row, int col) {
    return Data[row-1][col-1];
  }

  int getRows() { return rows; };
  int getCols() { return cols; };

  void print() {
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        cout << " " << Data[i][j] << " ";
      }
      cout << endl;
    }
  }

  ~Matrix() { 
    for (int i = 0; i < rows; i++) {
      delete[] Data[i];
    }
    delete Data;
  };
};

int main() {

  Matrix matrix(3, 3, 3);
  matrix.print();
  int ds = matrix.getRows();
  cout << ds << endl;
  cout << endl;

  matrix.set(2, 2, 2);
  matrix.print();

  int sd = matrix.get(3, 2);
  cout << sd;
  return 0;
}
// выделение памяти, не забывай
// Data = new int*[rows];
//   Data[i] = new int[cols];
// удаление памяти, не забывай
// delete Data[]