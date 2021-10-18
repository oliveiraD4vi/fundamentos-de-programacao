#include <stdio.h>

int main(){
	int i, j, n;
	scanf ("%d", &n);
	int v1[n], v2[n], soma[n];
	
	for (i=0;i<n;i++){
		scanf ("%d", &v1[i]);
	}
	
	for (i=0;i<n;i++){
		scanf ("%d", &v2[i]);
	}
	
	for (i=0,j=n-1;i<n && j>-1;i++,j--){
		soma[i] = v1[i]+v2[j];
	}
	
	for (i=0;i<n;i++){
		printf ("\n%d", soma[i]);
	}
	
	return 0;
}
