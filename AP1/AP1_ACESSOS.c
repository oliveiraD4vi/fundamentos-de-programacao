//AP1 - Q3
//1 MILHÃO DE ACESSOS

#include <stdio.h>

int main(){
	int n, i;
	scanf ("%d", &n);
	int dias[n], qntd_d=0, contador=0;
	
	for (i=0;i<n;i++){
		scanf ("%d", &dias[i]);
	}
	
	for (i=0;i<n;i++){
		contador += dias[i];
		qntd_d += 1;
		if (contador>=1000000) break;
	}
	
	printf ("%d", qntd_d);
	
	return 0;
}
