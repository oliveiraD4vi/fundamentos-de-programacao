#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	n++;
	
	int i, padovan[n];
	padovan[0] = 1;
	padovan[1] = 1;
	padovan[2] = 1;
	
	for (i=3;i<n;i++) padovan[i] = padovan[i-2]+padovan[i-3];
//	for (i=0;i<n;i++) printf ("%d ", padovan[i]);
	
	printf ("%d", padovan[n-1]);
	
	return 0;
}
