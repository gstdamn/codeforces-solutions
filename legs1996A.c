#include <stdio.h>
int main ()
{
    int num;
    //printf("digite a quantidade de casos testes\n");
        scanf("%d" , &num);
    int legs[num] , calc[num];

    for(int i = 0 ; i < num ; i++){
        //printf("digite a quantidade de pernas\n");
        scanf("%d" , &legs[i]);
    }
    for(int i = 0 ; i < num ; i++){
        if(legs[i]%4 > 1){
            calc[i] = (legs[i]/4) + ((legs[i]%4)/2);
        }else {
            calc[i] = legs[i]/4;
        }
        printf("%d\n" , calc[i]);
    }
return 0;
}
