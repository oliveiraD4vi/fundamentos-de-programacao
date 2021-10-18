#include <stdio.h>

int main(){
	int i, n, ap1, ap2;
	scanf ("%d", &n);
	float somAP1, somAP2, notasAP1[n], notasAP2[n], mediaAlu[n];
	
	for (i=0;i<n;i++){
		scanf ("%f", &ap1);
		notasAP1[i] = ap1;
	}
	
	for (i=0;i<n;i++){
		scanf ("%f", &ap2);
		notasAP2[i] = ap2;
	}
	
	for (i=0;i<n;i++){
		mediaAlu[i] = (notasAP1[i]+notasAP2[i])/2;
	}
	
	for (i=0;i<n;i++){
		printf ("%.2f\n", mediaAlu[i]);
	}
	
	return 0;
}
