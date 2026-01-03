#include <stdio.h>
int main ()
{
    int n;
    scanf("%d" , &n);
    int vetor[n];
    float percent , soma = 0;

    for(int i = 0 ; i < n; i++){
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    percent = soma/ n;
        printf("%f" , percent);

return 0;
}

