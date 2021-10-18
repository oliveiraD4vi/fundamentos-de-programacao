/*
AP2: TROCA ENTRE PAR E ÍMPAR DO VETOR
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>

int main(){
	int i, n;
	scanf ("%d", &n); //recebe o tamanho do vetor
	
	int vet[n];
	for (i=0;i<n;i++) scanf ("%d", &vet[i]); //recebe os valores do vetor
	
	//troca os valores do vetor
	for (i=0;i<n;i++){
		if (i==0 || i%2==0){
		int aux;
		aux = vet[i];
		vet[i] = vet[i+1];
		vet[i+1] = aux;
		}
	}
	
	for (i=0;i<n;i++) printf ("%d ", vet[i]); //imprime o vetor
	
	return 0;
}
