#include <stdio.h>

int main(){
	int i, j, m, n;
	scanf ("%d %d", &n, &m);
	
	int matA[n][m], soma=0;
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matA[i][j]);	
		
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) soma += matA[i][j];
		
	printf ("%d", soma);

	return 0;
}
