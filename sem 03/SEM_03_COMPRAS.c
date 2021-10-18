#include <stdio.h>

int main(){
	int i, n, qntd=0;
	scanf ("%d", &n);
	float prod[n], qprod[n], sal, vpf[n];
	
	for (i=0;i<n;i++){
		scanf ("%f", &prod[i]);
	}
	
	for (i=0;i<n;i++){
		scanf ("%f", &qprod[i]);
	}
	
	scanf ("%f", &sal);
	
	for (i=0;i<n;i++){
		vpf[i] = qprod[i]*prod[i];
	}
	
	for (i=0;i<n;i++){
		if (vpf[i]<sal/2){
			if (sal>=vpf[i]){
			sal -= vpf[i];
			qntd++;
			} else qntd = qntd;
		} else {
			sal = sal;
			qntd = qntd;
		}
	}	
	
	printf ("%d", qntd);
	
	return 0;
}
