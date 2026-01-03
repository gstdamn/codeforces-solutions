#include <stdio.h>
int main ()
{
    int num;
        //printf("digite a quantidade de eventos\n");
        scanf("%d" , &num);
    int vet[num] , cont = 0 , quantPol = 0;
    for(int i = 0; i < num ; i++){
        //printf("digite os numeros\n");
        scanf("%d" , &vet[i]);
    }
    for(int i = 0; i < num; i++){
        if(vet[i] > 0){
            quantPol += vet[i];
        }else{
            if(quantPol > 0){
                quantPol--;
            }else{
                cont++;
            }
        }
    }
    printf("%d" , cont);
return 0;
}
