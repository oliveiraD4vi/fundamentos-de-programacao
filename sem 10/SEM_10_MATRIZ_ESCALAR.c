#include <stdio.h>

int main(){
	int i, j, m, n;
	scanf ("%d %d", &n, &m);
	
	int matA[n][m], matC[n][m], alfa;
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matA[i][j]);
		
	scanf ("%d", &alfa);
		
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) matC[i][j] = alfa*matA[i][j];
		
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) printf ("%d ", matC[i][j]);

	return 0;
}
