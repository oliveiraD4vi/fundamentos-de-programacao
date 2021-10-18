#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
		float rent;
		float saida;
	}Aplic;

void maior_numero(float vetor[], int n);

int main(){
	
	int i, n;
	scanf ("%d", &n);
	Aplic vetor[n];
	
	for (i=0;i<n;i++) scanf ("%f %f", &vetor[i].rent, &vetor[i].saida);
	float inicial, final[n];
	scanf ("%f", &inicial);
	
	for (i=0;i<n;i++){
		float rent = (inicial*vetor[i].rent)/100;
		final[i] = rent-((rent*vetor[i].saida)/100);
	}
	
	maior_numero(final,n);
	
	return 0;
}

void maior_numero(float vetor[], int n){
	
	int i;
	float maior=vetor[0];
	for (i=0;i<n;i++) if (vetor[i]>=maior) maior = vetor[i];
	
	printf ("%.2f", maior);
}
