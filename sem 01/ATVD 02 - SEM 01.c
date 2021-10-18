#include <stdio.h>
#include <stdlib.h>

int main (){
	int dianas, mesnas, anonas, diaat, mesat, anoat, idade;
	scanf ("%d %d %d", &dianas, &mesnas, &anonas);
	scanf ("%d %d %d", &diaat, &mesat, &anoat);
	
	idade = (anoat - anonas);
	
	if (mesnas==mesat){
		if (dianas==diaat) printf ("%d", idade);
			else if (dianas<diaat) printf ("%d", idade);
					else {
						idade = (idade - 1);
						printf ("%d", idade);
					}
		} else if (mesnas<mesat) printf ("%d", idade);
					else {
						idade = (idade - 1);
						printf ("%d", idade);
	}

	return 0;
}


