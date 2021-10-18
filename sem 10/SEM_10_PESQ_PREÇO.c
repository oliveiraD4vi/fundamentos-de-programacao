#include <stdio.h>

int main(){
	int i, j, m, n;
	scanf ("%d %d", &n, &m);
	
	float prec[n][m], menor[n];
	
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%f", &prec[i][j]);
		
	for (i=0;i<n;i++) menor[i] = prec[i][0];
		
	for (i=0;i<n;i++)
		for (j=0;j<m;j++){
			if (prec[i][j]<menor[i]) menor[i] = prec[i][j];
		}
	
	for (i=0;i<n;i++) printf ("%.2f ", menor[i]);
	
	return 0;		
}
