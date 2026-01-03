#include <stdio.h>
#include <math.h>
int main ()
{

    long long int n , m , a , area1 , area2 , areaTotal;
    //printf("digite as dimensoes\n");
        scanf("%lld %lld %lld" , &n , &m , &a);

    area1 = n/a;
    area2 = m/a;
    area1 += (n%a > 0) ? 1:0;
    area2 += (m%a > 0) ? 1:0;

    printf("%lld", area1 * area2);
return 0;
}
