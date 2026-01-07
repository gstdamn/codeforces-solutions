#include <stdio.h>
int main ()
{
    int vet[3];
        for(int i = 0; i < 3; i++){scanf("%d" , &vet[i]);}

    int minor = vet[0] , major = vet[0], meddium, difference;
    for(int i = 0; i < 3; i++){
        if(vet[i] > major){major = vet[i];}
        else if (vet[i] < minor){minor = vet[i];}
    }
    for(int i = 0; i < 3; i++){
        if(vet[i] > minor){
            if(vet[i] < major){
                meddium = vet[i];
            }
        }
        else{meddium = vet[i];}
    }
    difference = major - minor;
    if(difference >= 10){printf("check again");}
    else{printf("final %d" , meddium);}

}