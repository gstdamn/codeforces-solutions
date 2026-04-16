#include <stdio.h>
int main()
{
	int numberCase;
		scanf("%d" , &numberCase);
	int a, b, resp;
	
	for (int i = 0; i < numberCase; ++i){
    scanf("%d %d" , &a , &b);
	    if(a%b == 0)
		    resp = 0;
		  else if(a < b)
			  resp = b - a;
		else{
        resp = b - a%b;
    }
		printf("%d\n", resp);
	}
}
