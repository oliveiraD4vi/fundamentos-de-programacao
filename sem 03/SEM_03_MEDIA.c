#include <stdio.h>

int main(){
	int n, i;
	scanf ("%d", &n);
	float ap1[n], ap2[n], media[n];
	
	for (i=0;i<n;i++){
		float k;
		scanf ("%f", &k);
		ap1[i] = k;
	}
	
	for (i=0;i<n;i++){
		float k;
		scanf ("%f", &k);
		ap2[i] = k;
	}
	
	for (i=0;i<n;i++){
		media[i] = (ap1[i]+ap2[i])/2;
		printf ("%.2f\n", media[i]);
	}
	
	return 0;
}
