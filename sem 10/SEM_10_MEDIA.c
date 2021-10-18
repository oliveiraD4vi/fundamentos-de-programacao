#include <stdio.h>

int main(){
	int i, j, m, n;
	scanf ("%d %d", &n, &m);
	
	float matriz[n][m], soma[m], media[m];
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%f", &matriz[i][j]);
		
	for (j=0;j<m;j++) soma[j] = 0;
		
	for (j=0;j<m;j++)
		for (i=0;i<n;i++) soma[j] += matriz[i][j];
		
	for (j=0;j<m;j++) media[j] = soma[j]/n;
	
	for (j=0;j<m;j++) printf ("%.2f ", media[j]);
	
	return 0;
}
