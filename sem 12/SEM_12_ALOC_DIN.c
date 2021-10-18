#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, n;
	scanf ("%d", &n);
	
	int *vet1 = (int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++) scanf ("%d", &vet1[i]);
	
	int *vet2 = (int*)malloc(n*sizeof(int));
	for (i=0;i<n;i++) scanf ("%d", &vet2[i]);
	
	int *soma = (int*)malloc(n*sizeof(int));
	
	for (i=0;i<n;i++){
		soma[i] = vet1[i]+vet2[i];
	}
	
	for (i=0;i<n;i++){
		printf("%d ", soma[i]);
	}
	
	free(vet1);
	free(vet2);
	free(soma);
	
	return 0;
}
