#include <stdio.h>

int main(){
	int n1, n2, i, j;
	scanf ("%d", &n1);
	
	int maior, v1[n1];
	for (i=0;i<n1;i++){
		scanf ("%d", &v1[i]);
	}
	
	scanf ("%d", &n2);
	
	int v2[n2];
	for (i=0;i<n2;i++){
		scanf ("%d", &v2[i]);
	}
	
	int igld[n1], igldA;
	
	for(i=0;i<n1;i++){
   		for(j=0;j<n2;j++){
       		if (v1[i]==v2[j]) {
       			igld[i] = 1;
       			break;
			   } else igld[i] = 0;
   		}
	}
	
	for (i=0;i<n1;i++){
		if (igld[i]==1) igldA = 1;
		else igldA = 0;
		
		if (igldA==0) break;
	}
	
	if (igldA==1) printf ("Iguais");
	else printf ("Diferentes");
	
	return 0;
}
