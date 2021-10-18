#include <stdio.h>

int main(){
	int i, n;
	scanf ("%d", &n);
	int vetor[n], aux[n], chave;
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor[i]);
	}
	
	scanf ("%d", &chave);
	
	for (i=0;i<n;i++){
		switch (chave){
			case 1:
				if(vetor[i]%2!=0) aux[i] = vetor[i];
				else aux[i] = 0;
				break;
			case 2:
				if(vetor[i]%2==0) aux[i] = vetor[i];
				else aux[i] = 0;
				break;
			case 3:
				if(vetor[i]>=0) aux[i] = vetor[i];
				else aux[i] = 0;
				break;
			case 4:
				if(vetor[i]<0) aux[i] = vetor[i];
				else aux[i] = 0;
				break;
			default:
				break;
		}
	}

	for (i=0;i<n;i++){
		if (aux[i]!=0) printf ("\n%d", aux[i]);
	}
	
	return 0;
}
