#include <stdio.h>

void modulo_vetor(int numeros[], int n);

int main(){
	
	int n;
	scanf ("%d", &n);
	
	int i, vetor[n];
	for (i=0;i<n;i++) scanf ("%d", &vetor[i]);
	
	modulo_vetor(vetor,n);
	
	for (i=0;i<n;i++) printf ("%d ", vetor[i]);
	
	return 0;
}

void modulo_vetor(int numeros[], int n){
	
	int i;
	for (i=0;i<n;i++){
		if (numeros[i]<=0) numeros[i] = numeros[i]*-1;
	}
	
	return;
}
