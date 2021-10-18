#include <stdio.h>

int main(){
	int i, soma, n;
	scanf ("%d", &n);
	int vet[n];
	for (i=0;i<n;i++) scanf ("%d", &vet[i]);
//	for (i=0;i<n;i++) printf (" %d", vet[i]);
	
	i = 0;
	soma = 0;
	while (i<n){
		if (vet[i]<0) break;
		soma = soma+vet[i];
		i++;
	}
	
	printf ("%d", soma);
	
	return 0;
}
