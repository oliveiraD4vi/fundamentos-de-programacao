#include <stdio.h>

int main(){
	int i, j, k, n;
	scanf ("%d", &n);
	
	int vet[n], piv;
	for (i=0;i<n;i++) scanf ("%d", &vet[i]);
	
	scanf ("%d", &piv);
	
	int q_menor=0, q_maior=0;
	for (i=0;i<n;i++){
		if (vet[i]>=piv) q_maior++;
		else q_menor++;
	}
	
	int vetM[q_maior], vetm[q_menor];
	
	for (i=0,j=0,k=0;i<n;i++){
		if (vet[i]>=piv) {
			vetM[j] = vet[i];
			j++;
		} else { 
			vetm[k] = vet[i];
			k++;
		}
	}
	
	for (i=0;i<k;i++) printf ("%d ", vetm[i]);
	printf("\n");
	for (i=0;i<j;i++) printf ("%d ", vetM[i]);
	
	return 0;
}
