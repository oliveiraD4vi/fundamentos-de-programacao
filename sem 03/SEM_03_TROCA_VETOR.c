#include <stdio.h>

int main(){
	int n, i;
	scanf ("%d", &n);
	int vetor1[n], vetor2[n], vetoraux[n];
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor1[i]);
	}
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor2[i]);
	}
	
	for (i=0;i<n;i++){
		vetoraux[i] = vetor1[i];
		vetor1[i] = vetor2[i];
		vetor2[i] = vetoraux[i];
	}
	
	for (i=0;i<n;i++){
		printf ("\n%d", vetor1[i]);
	}
	
	for (i=0;i<n;i++){
		printf ("\n%d", vetor2[i]);
	}
	
	return 0;
}
