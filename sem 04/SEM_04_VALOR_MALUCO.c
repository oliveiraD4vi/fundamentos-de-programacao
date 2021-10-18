#include <stdio.h>

int main(){
	int n, i, j;
	scanf ("%d", &n);
	int vet[n], VM=0, termo[n];
	
	for (i=0;i<n;i++){
		scanf ("%d", &vet[i]);
	}
	
	for (i=0,j=n-1;i<n&&j>-1;i++,j--){
		termo[i] = (vet[i]-vet[j])*(vet[i]-vet[j]);
	}
	
	for (i=0;i<n;i++){
		VM += termo[i];
	}
	
	printf ("%d", VM);
	
	return 0;
}
