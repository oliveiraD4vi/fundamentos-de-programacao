#include <stdio.h>

int main(){
	int i, n;
	scanf ("%d", &n);
	int vetor1[n], vetor2[n], soma[n];
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor1[i]);
	}
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor2[i]);
	}
	
	for (i=0;i<n;i++){
		soma[i] = vetor1[i]+vetor2[i];
	}
	
	for (i=0;i<n;i++){
		printf("%d\n", soma[i]);
	}
	
	return 0;
}
