#include <stdio.h>

void mm_vetor(int numeros[], int n, int *menor, int *maior);

int main(){
	int i, n;
	scanf ("%d", &n);
	
	int vetor[n];
	for (i=0;i<n;i++) scanf ("%d", &vetor[i]);
  
	int *menor, *maior;
	menor = &vetor[0];
	maior = &vetor[0];
	
	mm_vetor (vetor,n,menor,maior);
	
	return 0;
}

void mm_vetor(int numeros[], int n, int *menor, int *maior){
	
	printf ("\n");
	
	int i;
	for (i=0;i<n;i++) if (numeros[i]<*menor) menor = &numeros[i];
	for (i=0;i<n;i++) if (numeros[i]>*maior) maior = &numeros[i];
	
	printf ("%d %d", *menor, *maior);
}
