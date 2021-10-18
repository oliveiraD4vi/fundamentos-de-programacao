#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	
	int i, j, auxA=1, auxB=1, matriz[n][n];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf ("%d", &matriz[i][j]);
		
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (i==j){
				if (matriz[i][j]!=1) auxA=0;
				if (auxA==0) break;
			} else {
				if (matriz[i][j]!=0) auxB=0;
				if (auxB==0) break;
			}
		}
	}
	
	if (auxA==1&&auxB==1) printf ("sim");
	else printf ("nao");
	
	return 0;
}
