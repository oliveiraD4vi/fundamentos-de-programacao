/*
AP3: VALOR DAS COMPRAS
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
		char nome[200];
		float prec;
		int qntd;
	}ItemCompra;

float calcular_total_compras(ItemCompra compras[], int n);

int main(){
	
	int i, n;
	scanf ("%d", &n);
	ItemCompra compras[n];
	
	for (i=0;i<n;i++){
		scanf (" %[^\n]", compras[i].nome);
		scanf ("%f", &compras[i].prec);
		scanf ("%d", &compras[i].qntd);
	}
	
	float valor_final = calcular_total_compras(compras,n);
	
	printf ("%.2f", valor_final);
	
	return 0;
}

float calcular_total_compras(ItemCompra compras[], int n){
	
	int i; 
	float aux=0;
	for (i=0;i<n;i++) aux += compras[i].prec*(compras[i].qntd*1.0);
	
	return aux;
}
