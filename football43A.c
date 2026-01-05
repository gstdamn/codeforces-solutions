#include <stdio.h>
#include <string.h>     
int main() {
    int n;
    scanf("%d", &n);
     
    char team1[11], team2[11], current[11];
        scanf("%s", team1);
    int goal1 = 1, goal2 = 0;

    for (int i = 1; i < n; i++) {
        scanf("%s", current);
        if(strcmp(current, team1) == 0) {
                goal1++;
        }else{
            if(goal2 == 0) {strcpy(team2, current);}
                goal2++;
            }
        }
    printf("%s\n", (goal1 > goal2) ? team1 : team2);
}