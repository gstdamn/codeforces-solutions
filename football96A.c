#include <stdio.h>
#include <string.h>
int main()
{
    char string[101];
        scanf("%s" , string);
    int count = 1 , size = strlen(string);

    for(int i = 1; i < size; i++){
        if(string[i] == string[i-1]){
            count++;
            if(count == 7){break;};
        }else{
            count = 1;
        }
    }
    printf("%s" , (count == 7) ? "YES" : "NO");
}