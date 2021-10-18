#include <stdio.h>

int main(){
	int i, n;
	scanf ("%d", &n);
	int vetor[n], chave, aux=0;
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor[i]);
	}
	
	scanf ("%d", &chave);
	
	for (i=0;i<n;i++){
		if (chave==vetor[i]) {
			aux=1;
			break;
		}
		else aux = 0;
	}

	if (aux==1) printf ("SIM\n");
	else printf ("NAO\n");
	
	return 0;
}
