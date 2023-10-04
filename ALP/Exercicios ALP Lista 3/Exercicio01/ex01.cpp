#include <iostream>

int main() {
  int mat[2][10];

  mat[1][6] = 7;
  mat[0][10] = 3;
  mat[1][3] = mat[1][6] + mat[0][10];

  std::cout << mat[1][3] << std::endl;
}