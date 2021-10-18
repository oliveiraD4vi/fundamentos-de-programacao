#include <stdio.h>

int potencia (int base, int ex);

int main(){
	int m, n;
	scanf ("%d %d", &n, &m);
	
	int valor = potencia(n,m);
	
	printf ("%d", valor);
	
	return 0;
}

int potencia (int base, int ex){
	
	if (ex==0) return 1;
	
	return (base * potencia(base,ex-1));
	
}
