# matrices

CHALLENGE:
Write a program that reads an array of integer values, allocates the data dynamically, prints the values ​​from the array, and finally frees up the allocated space. The main() function of your program is already implemented. Now just use the Matrix type and write the functions createMatrix(), readMatrix(), printMatrix() and destroyMatrix() with the following signatures:

int** createMatrix(int ​​nlin, int ncol)
void readMatrix(int ​​**mat, int nlin, int ncol)
void printMatrix(int ​​**mat, int nlin, int ncol)
void destroyMatrix(int ​​**mat, int nlin)
The implementation of main() MUST BE (do not change):

int main() {
  int lin, col;
  scanf("%d %d", &lin, &col);
  int** mat = createMatrix(lin, col); 
  readMatrix(mat, lin, col);
  printMatrix(mat,lin,col);
  destroyMatrix(mat,lin);
  mat = NULL;
  printf("OK\n");
  
  return 0;
}
