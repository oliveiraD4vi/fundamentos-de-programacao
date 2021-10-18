#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	
	int i, j, catalan[n];
	catalan[0] = 1;
	catalan[1] = 1;
	
	for (i=2; i<=n; i++) {
        catalan[i] = 0;
        for (j=0; j < i; j++) {
            catalan[i] += (catalan[j] * catalan[i-j-1]);
		}
	}
	
	printf ("%d", catalan[n]);
	
	return 0;
}
