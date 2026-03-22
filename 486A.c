#include <stdio.h>
int main()
{
    long long int number, result;
      scanf("%lld", &number);
    if (number % 2 != 0)
      result = -(number / 2) - 1;
    else
      result = number / 2;
    printf("%lld\n", result);

}
