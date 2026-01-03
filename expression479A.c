#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int major = a + b + c;

    if (a * b * c > major)
        major = a * b * c;

    if (a + b * c > major)
        major = a + b * c;

    if ((a + b) * c > major)
        major = (a + b) * c;

    if (a * (b + c) > major)
        major = a * (b + c);

    printf("%d\n", major);
    return 0;
}
