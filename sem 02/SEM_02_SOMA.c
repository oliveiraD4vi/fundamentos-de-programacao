#include <stdio.h>

int main(){
    int somap=0, somai=0, inf, sup, i;
    scanf ("%d %d", &inf, &sup);
    
    for(i=inf; i<=sup; i++){
       if (i%2==0) {
       	somap = somap+i;
	   } else somai = somai+i;
    }
    
    printf ("%d %d", somap, somai);
	
	return 0;
}
