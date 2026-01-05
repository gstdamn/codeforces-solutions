#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    char team1[20], team2[20];
    scanf("%s", team1);

    int goal1 = 1, goal2 = 0;

    for (int i = 1; i < n; i++){
        scanf("%19s", team2);
        if (strcmp(team1, team2) == 0){
            goal1++;
        }
        else{
            if(goal2 == 0){scanf("%s" , team2);}
            goal2++;
        }
    }
    printf("%s\n", (goal1 > goal2) ? team1 : team2);

}