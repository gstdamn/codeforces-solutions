#include <stdio.h>
int main ()
{
    int num;
        scanf("%d" , &num);
    int count = 0;
    
    for(int i = 5; i > 0; i-- ){
        if(num > i || num == i){
            count += num/i;
            num -= i * (num/i);
        }
    }

    printf("%d" , count);
}