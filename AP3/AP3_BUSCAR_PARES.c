/*
AP3: BUSCAR PARES
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>
#include <stdlib.h>

int buscar_pares(int vetor1[], int vetor2[], int n);

int main(){
	int i, n;
	scanf ("%d", &n);
	
	int *vetor = (int*)malloc(n*sizeof(int));
	int *pares = (int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++) scanf ("%d", &vetor[i]);
	
	int qntd = buscar_pares(vetor, pares, n);
	
	for (i=0;i<qntd;i++) printf ("%d ", pares[i]);
		
	return 0;
}

int buscar_pares(int vetor1[], int vetor2[], int n){
	
	int i, j, aux=0;
	for (i=0,j=0;i<n;i++){
		if (vetor1[i]%2==0) {
			vetor2[j] = vetor1[i];
			j++;
			aux++;
		}
	}
	
	return aux;
}
