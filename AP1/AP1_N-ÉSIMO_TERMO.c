//AP1 - Q4
//N-ESIMO TERMO DA SEQUENCIA

#include <stdio.h>

int main(){
	int n, i, termo;
	scanf ("%d", &n);
	int termoP[n];
	
	termoP[0] = 1;
    termoP[1] = 5;
	
    for (i=2;i<n;i++){
    	termoP[i] = termoP[i-1]+(termoP[i-2]*2);
	}
	
	printf ("%d", termoP[n-1]);
	
	return 0;
}
