#include <stdio.h>

int main(){
	int i, j, m, n;
	scanf ("%d %d", &n, &m);
	
//	printf ("Linhas: %d\nColunas: %d\n", n, m);
	
	int matA[n][m], matB[n][m], matC[n][m];
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matA[i][j]);
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matB[i][j]);
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) matC[i][j] = matA[i][j]+matB[i][j];

	for (i=0;i<n;i++)
		for (j=0;j<m;j++) printf ("%d ", matC[i][j]);
	
	return 0;
}
