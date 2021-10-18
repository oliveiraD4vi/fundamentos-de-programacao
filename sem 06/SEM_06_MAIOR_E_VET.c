#include <stdio.h>

int maior_numero(int vet[], int n){
	int i, j, maior = vet[0];
	
	for (i=0;i<n;i++){
		if (vet[i]>maior) maior = vet[i];
		else maior = maior;
	}
	
	return maior;
}

int main(){
	int i, n;
	scanf ("%d", &n);
	int vet[n];
	for (i=0;i<n;i++) scanf ("%d", &vet[i]);
	
	int maior_num = maior_numero(vet, n);
	printf ("%d", maior_num);
	
	return 0;
}
