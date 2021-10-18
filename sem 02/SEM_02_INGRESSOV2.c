#include <stdio.h>

int main(){
    int n, i;
    scanf ("%d", &n);
    int filho[n];
    float des[n], df, valor, valort, dv, valorf, valordf;
    
	for(i=0; i<n; i++){
       scanf ("%d", &filho[i]);
       if (i==n-1) scanf ("%f", &valor);
	}
	
	valort = valor*n;
	dv = valort*0.15;
	valordf = valort-dv;
	
	for(i=0; i<n; i++){
       
	   if (filho[i]<=5 && filho[i]>=0) des[i] = 0.2*valor;
		else if (filho[i]<=7 && filho[i]>=6) des[i] = 0.15*valor;
			else if (filho[i]<=10 && filho[i]>=8) des[i] = 0.05*valor;
				else if (filho[i]>10) des[i] = 0;
				
		df += des[i];
	}
	
	valorf = valort-df;
    
    if (df<=dv) printf ("%.2f", valorf);
	else printf ("%.2f", valordf); 
	
	return 0;
}
