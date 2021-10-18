#include <stdio.h>

int main(){
	int i, j, l, n1=0, n2=0, s=0;
	
	scanf ("%d", &n1);
	int c1[n1];
	for (i=0;i<n1;i++) scanf ("%d", &c1[i]);
	
	scanf ("%d", &n2);
	int c2[n2];
	for (i=0;i<n2;i++) scanf ("%d", &c2[i]);
	
	for (i=0;i<n1;i++){
		for (j=0;j<n2;j++){
			if (c1[i]==c2[j]) s ++;		
		}
	}
	
	int intersec[s], b=0;
	for (i=0;i<n1;i++){
		for (j=0;j<n2;j++){
			if (c1[i]==c2[j]){
				intersec[b] = c1[i];
				b ++;	
			}
		}
	}
	
	for (i=0;i<s;i++) printf ("\n%d", intersec[i]);
	
	return 0;
}
