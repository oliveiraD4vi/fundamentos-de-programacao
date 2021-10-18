#include <stdio.h>

int main(){
	int i, j, n;
	scanf ("%d", &n);
	
	int matA[n][n], aux=1;
	
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf ("%d", &matA[i][j]);
		
	for (i=0;i<n;i++)
		for (j=0;j<n;j++){
			if (matA[i][j]!=matA[j][i]) aux = 0;
			if (aux==0) break;
		}
		
	if (aux==1) printf ("Sim");
	else printf ("Nao");
	
	return 0;
}
