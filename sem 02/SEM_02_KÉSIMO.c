#include <stdio.h>

int main(){
	int k, n, i, sd, num;
	scanf ("%d %d", &k, &n);
	
	for (i=0;i<n;i++){
		scanf ("%d", &num);
		if (i==k-1) sd = num;
		else sd = sd;
	}
	
	printf ("%d", sd);
	
	return 0;
}
