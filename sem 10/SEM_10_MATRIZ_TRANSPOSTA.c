#include <stdio.h>

int main(){
	int i, j, m, n;
	scanf ("%d %d", &n, &m);
	
	int matA[n][m], matT[m][n], aux=1;
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matA[i][j]);

	for (j=0;j<m;j++)
		for (i=0;i<n;i++) matT[j][i] = matA[i][j];
		
	for (j=0;j<m;j++)
		for (i=0;i<n;i++) printf ("%d ", matT[j][i]);

	return 0;		
}
