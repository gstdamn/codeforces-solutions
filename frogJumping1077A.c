#include <stdio.h>
int main ()
{
    int num;
        //printf("digite a quantidade de casos que voce quer\n");
        scanf("%d" , &num);
    
    long long int right[num], left[num], times[num], frog[num];
    for(int i = 0; i < num; i++){
         scanf("%lld %lld %lld" , &right[i] , &left[i] , &times[i]);    
        }

   for(int i = 0; i < num; i++){
        if(times[i]%2 != 0){
            frog[i] = (right[i] * (times[i]/2 + 1) - (left[i] * (times[i]/2)));
        }else {
            frog[i] = ((right[i] * times[i]/2) - (left[i] * times[i]/2));
        }
        printf("%lld\n" , frog[i]);
   }
}