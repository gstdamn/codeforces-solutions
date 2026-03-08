#include <stdio.h>
int main() {
  int num;
  scanf("%d", &num);
  int array[num], position[num];
  for (int i = 0; i < num; i++) {
    scanf("%d", &array[i]);
    if (array[i] >= 1900)
      position[i] = 1;
    if (array[i] >= 1600 && array[i] <= 1899)
      position[i] = 2;
    if (array[i] >= 1400 && array[i] <= 1599)
      position[i] = 3;
    if (array[i] <= 1399)
      position[i] = 4;
  }
  for (int i = 0; i < num; i++) {
    printf("Division %d\n", position[i]);
  }
}
