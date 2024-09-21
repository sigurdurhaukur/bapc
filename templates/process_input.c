#include <stdio.h>
#include <stdlib.h>

// table of contents
// 1. single line input
// 2. n lines input
// 3. input separated by space
// 4. input seperated by unknown number of spaces
// 5. nxm matrix (of ints) input separated by space and newline
// 6. nxm matrix (of chars) input separated by space and newline

int main() {

  // ======================
  // single line input
  char *line1 = malloc(100);
  char *line2 = malloc(100);

  fgets(line1, 100, stdin);
  fgets(line2, 100, stdin);

  free(line1);
  free(line2);
  // ======================

  // ======================
  // n lines input
  int n = 5;
  char **lines = malloc(n * sizeof(char *));
  for (int i = 0; i < n; i++) {
    lines[i] = malloc(100);
    fgets(lines[i], 100, stdin);
  }

  for (int i = 0; i < n; i++) {
    free(lines[i]);
  }
  free(lines);
  // ======================

  // ======================
  // input separated by space
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d %d\n", a, b);
  // ======================

  // ======================
  // input seperated by unknown number of spaces
  // input: 1 2 3 4 5 ... n

  int x;
  while (scanf("%d", &x) != EOF) {
    printf("%d\n", x);
  }
  // ======================

  // ======================
  // nxm matrix (of ints) input separated by space and newline
  int n = 3, m = 3;
  int **matrix = malloc(n * sizeof(int *));

  for (int i = 0; i < n; i++) {
    matrix[i] = malloc(m * sizeof(int));
    for (int j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  // print matrix
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);
  // ======================

  // ======================
  // nxm matrix (of chars) input separated by space and newline

  int n = 3, m = 3;
  char **matrix = malloc(n * sizeof(char *));
  for (int i = 0; i < n; i++) {
    matrix[i] = malloc(m * sizeof(char));
    for (int j = 0; j < m; j++) {
      scanf(" %c", &matrix[i][j]);
    }
  }

  for (int i = 0; i < n; i++) {
    free(matrix[i]);
  }
  free(matrix);
  // ======================

  return 0;
}
