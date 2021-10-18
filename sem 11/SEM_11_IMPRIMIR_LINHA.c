#include <stdio.h>

int main(){
	int i, j, n, m;
	scanf ("%d %d", &n, &m);
	
	int matriz[n][m];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matriz[i][j]);
	
	int linha;
	scanf ("%d", &linha);
	
	int vetorLinha[m];
	for (i=linha-1,j=0;j<m;j++) vetorLinha[j] = matriz[i][j];
	
	for (j=0;j<m;j++) printf ("%d ", vetorLinha[j]);
		
	return 0;
}
