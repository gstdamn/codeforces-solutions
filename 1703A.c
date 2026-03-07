#include <stdio.h>
int main() {
  int num;
  scanf("%d", &num);
  char string[4];
  int cont = 0, result[num], i = 0;
  while (i < num) {
    scanf("%s", string);
    if (string[0] == 'Y' || string[0] == 'y') {
      cont++;
      if (string[1] == 'E' || string[1] == 'e') {
        cont++;
        if (string[2] == 'S' || string[2] == 's') {
          cont++;
        } else
          cont--;
      } else
        cont--;
    } else {
      cont--;
    }
    result[i] = cont;
    cont = 0;
    string[0] = '\0';
    i++;
  }
  for (int i = 0; i < num; i++) {
    printf("%s\n", (result[i] == 3) ? "YES" : "NO");
  }
}
