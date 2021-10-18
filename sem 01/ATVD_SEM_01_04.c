#include <stdio.h>

int main(){
	int f1, f2, f3, f4; 
	float valor;
	scanf ("%d %d %d %d %f", &f1, &f2, &f3, &f4, &valor);
	
	float d1, d2, d3, d4, dv, valort = valor*4;
	dv = 0.15*valort;
	
	if (f1<=5 && f1>=0) d1 = 0.2*valor;
	else if (f1<=7 && f1>=6) d1 = 0.15*valor;
		else if (f1<=10 && f1>=8) d1 = 0.05*valor;
			else if (f1>10) d1 = 0;
	
	if (f2<=5 && f2>=0) d2 = 0.2*valor;
	else if (f2<=7 && f2>=6) d2 = 0.15*valor;
		else if (f2<=10 && f2>=8) d2 = 0.05*valor;
			else if (f2>10) d2 = 0;
			
	if (f3<=5 && f3>=0) d3 = 0.2*valor;
	else if (f3<=7 && f3>=6) d3 = 0.15*valor;
		else if (f3<=10 && f3>=8) d3 = 0.05*valor;
			else if (f3>10) d3 = 0;
	
	if (f4<=5 && f4>=0) d4 = 0.2*valor;
	else if (f4<=7 && f4>=6) d4 = 0.15*valor;
		else if (f4<=10 && f4>=8) d4 = 0.05*valor;
			else if (f4>10) d4 = 0;
			
	float df = d1+d2+d3+d4, valorf = valort-df, valordf = valort-(0.15*valort);
	
	if (df<=dv) printf ("%.2f", valorf);
	else printf ("%.2f", valordf); 
	
	return 0;
}
