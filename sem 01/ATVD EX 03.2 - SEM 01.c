#include <stdio.h>

int main(){
	int d1, d2, d3, d4, d5;
	scanf ("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
	
	int ok1 = d3==d1+d2;
	int ok2 = 0;
	int ok3 = 0;
	
	if (d4%2==0){
		ok2 = d4==2*d2;
	} else ok2 = d4==2*d2+1;
	
	if (d5%3==0){
		ok3 = d5==2*d3;
	} else ok3 = d5==2*d3-1;
	 
	if (ok1, ok2, ok3) printf ("SIM\n");
	else printf ("NAO\n");
	
	return 0;
}
