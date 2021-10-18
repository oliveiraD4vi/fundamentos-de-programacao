#include <stdio.h>

int main(){
	int n, i, termo;
	scanf ("%d", &n);
	int termoP[n];
	
	termoP[0] = 1;
	
    for (i=1;i<n;i++){
    	termoP[i] = (termoP[i-1]*2)+1;
	}
	
	for (i=0;i<n;i++){
    	printf ("%d, ", termoP[i]);
	}
	
	return 0;
}
