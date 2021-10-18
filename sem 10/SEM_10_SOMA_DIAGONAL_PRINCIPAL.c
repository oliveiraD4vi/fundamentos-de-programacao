#include <stdio.h>

int main(){
	int i, j, n;
	scanf ("%d", &n);
	
	int matA[n][n], somaD=0;
	
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf ("%d", &matA[i][j]);	
		
	for (i=0;i<n;i++)
		for (j=0;j<n;j++){
			if (i==j) somaD += matA[i][j];
		}
		
	printf ("%d", somaD);

	return 0;
}
