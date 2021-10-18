#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
    	int id;
    	int qntd;
		float prec;
	}Produto;
	
int main(){
	
	int i, n;
	scanf ("%d", &n);
	Produto vetor[n];
	
	for (i=0;i<n;i++) scanf ("%d %d %f", &vetor[i].id, &vetor[i].qntd, &vetor[i].prec);
	
	int venda[n], sobra[n];
	for (i=0;i<n;i++) scanf ("%d", &venda[i]);
	
	float aux, total=0;
	for (i=0;i<n;i++){
		aux = (venda[i]*1.0)*vetor[i].prec;
		sobra[i] = vetor[i].qntd - venda[i];
		total += aux;
	}
	
	printf ("%.2f\n", total);
	for (i=0;i<n;i++) printf ("%d ", sobra[i]);
	
	return 0;
}
