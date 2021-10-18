#include <stdio.h>

int main(){
	int i, n;
	scanf ("%d", &n);
	int vetor[n], inteiro;
	
	for (i=0;i<n;i++){
		scanf ("%d", &vetor[i]);
	}
	
		if (n=1){
		inteiro = vetor[i];
		} else if (n=2){
			inteiro = (vetor[0]*10)+(vetor[1]);
		} else if (n=3){
			inteiro = (vetor[0]*100)+(vetor[1]*10)+vetor[2];
		} else if (n=4){
			inteiro = (vetor[0]*1000)+(vetor[1]*100)+(vetor[2]*10)+vetor[3];
		} else if (n=5){
			inteiro = (vetor[0]*10000)+(vetor[1]*1000)+(vetor[2]*100)+(vetor[3]*10)+vetor[4];
		} else if (n=6){
			inteiro = (vetor[0]*100000)+(vetor[1]*10000)+(vetor[2]*1000)+(vetor[3]*100)+(vetor[4]*10)+vetor[5];
		} 
	
	printf ("%d", inteiro);
	
	return 0;
}
