#include <stdio.h>

int main(){
	int i, j, n1, n2;
	scanf ("%d", &n1);
	int c1[n1];
	for (i=0;i<n1;i++) scanf ("%d", &c1[i]);
	
	scanf ("%d", &n2);
	int c2[n2];
	for (i=0;i<n2;i++) scanf ("%d", &c2[i]);
	
	int aux[n1], k=0, au;
	for (i=0;i<n1;i++){
		for (j=0;j<n2;j++){
			if (c1[i]==c2[j]) {
				aux[i] = 1;
				break;
			} else aux[i] = 0;
		}
	}
	
	for (i=0;i<n1;i++){
		if (aux[i]==1) au = 1;
		else {
			au = 0;
			break;
		}
	}
	
	if (au==1) printf ("Contido");
	else printf ("Nao contido");
	
	return 0;
}
