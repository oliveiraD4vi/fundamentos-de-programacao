#include <stdio.h>

int main(){
	int valor, tipo, par;
	scanf ("%d %d %d", &valor, &tipo, &par);
	int valorf, pari, parf;
	
	switch (tipo){
		case 1:
			valorf = valor-8;
			if (valorf%par==0){
				pari = valorf/par;
				parf = valorf/par;
				printf ("%d\n %d\n %d", valorf, pari, parf);
			} else
			break;
		case 2:
			valorf = valor-15;
			if (valorf%par==0){
				pari = valorf/par;
				parf = valorf/par;
				printf ("%d\n %d\n %d", valorf, pari, parf);
			} else 
			break;
		case 3:
			valorf = valor-18;
			if (valorf%par==0){
				pari = valorf/par;
				parf = valorf/par;
				printf ("%d\n %d\n %d", valorf, pari, parf);
			} else
			break;
		default:
			break;	
	}
	
	return 0;
}
