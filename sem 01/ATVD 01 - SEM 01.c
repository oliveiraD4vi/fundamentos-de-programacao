#include <stdio.h>
#include <stdlib.h>

int main (){
	int num;
	scanf ("%d", &num);
	
	if (num%5==0 && num%3==0){
		printf ("SIM\n");
			} else if (num%7!=0) {
					printf ("SIM\n");
						} else printf ("NAO\n");
	
	return 1;
}
