#include <stdio.h>

int main(){
	int d1, d2, d3, d4, d5;
	scanf ("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
	
	if (d1%2!=0 && d3%2!=0 && d5%2!=0 && d2%2==0 && d4%2==0 && d3==d1+4 && d5==d3+2){
		printf ("SIM");
	} else printf ("NAO");
	
	return 0;
}
