#include <stdio.h>

int quantos_pares(int vet[], int n);

int main(){
	int i, j, n;
	scanf ("%d", &n);
	int vet[n];
	for (i=0;i<n;i++) scanf ("%d", &vet[i]);
//	for (i=0;i<n;i++) printf ("%d ", vet[i]);
	
	int k = quantos_pares(vet,n);
//	printf ("%d", k);
	int pares[k];
	
	for (i=0,j=0;i<n;i++){
		if (vet[i]%2==0) {
			pares[j] = vet[i];
			j++;
		}
	}
	
	float media, soma=0;
	for (i=0;i<k;i++) soma += pares[i];
//	printf ("\n%f", soma);
	media = soma/k;
	
	printf ("\n%.2f", media);
	
	return 0;
}

int quantos_pares(int vet[], int n){
	
	int i, qntd=0;
	for (i=0;i<n;i++){
		if (vet[i]%2==0) qntd++;
	}
	
	return qntd;
}
