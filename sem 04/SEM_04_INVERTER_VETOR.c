#include <stdio.h>

int main(){
	int n, i, j;
	scanf ("%d", &n);
	int vetor[n], A;
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor[i]);
	}
	
	A = vetor[0];
	vetor[0] = vetor[n-1];
	vetor[n-1] = A;
	for (i=1;i<n;i++){
		A = vetor[i];
		vetor[i] = vetor[n-(i+1)];
		vetor [n-(i+1)] = A;
	}
	
	for (i=0;i<n;i++){
		printf ("\n%d", vetor[i]);
	}
	
	return 0;
}
