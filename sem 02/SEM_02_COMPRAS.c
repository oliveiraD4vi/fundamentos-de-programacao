#include <stdio.h>

int main(){
	int n, qntd, i;
	scanf ("%d", &n);
	float sal, prec, soma;
	scanf ("%f", &sal);
	soma = sal;

	for (i=0;i<n;i++){
		scanf ("%f", &prec);
		if (prec<sal/2){
			if (soma>=prec){
			soma -= prec;
			qntd++;
			} else qntd = qntd;
		} else {
			soma = soma;
			qntd = qntd;
		}
	}	
	
	printf ("%d", qntd);
	
	return 0;
}
