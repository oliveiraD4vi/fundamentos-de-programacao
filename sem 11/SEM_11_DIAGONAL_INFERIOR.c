#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	
	int aux=1, i, j, matriz[n][n];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf ("%d", &matriz[i][j]);
	
	for (i=0;i<n-1;i++){
		j = i+1;
		for (j;j<n;j++){
			if (matriz[i][j]!=0) aux=0;
			if (aux==0) break;
		}
	}
	
	if (aux==1) printf ("sim");
	else printf ("nao");
	
	return 0;			
}
