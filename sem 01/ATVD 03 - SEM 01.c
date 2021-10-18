#include <stdio.h>
#include <stdlib.h>

int main (){
	int vtc1, vtc2, vtc3, vttot;
	scanf ("%d %d %d", &vtc1, &vtc2, &vtc3);
	
	vttot = vtc1 + vtc2 + vtc3;
	
	if (vtc1>vtc2 && vtc1>vtc3){
		if (vtc1<=vttot/2) printf ("Segundo Turno\n");
			else printf ("Primeiro Turno\n");
	} else if (vtc2>vtc1 && vtc2>vtc3){
		if (vtc2<=vttot/2) printf ("Segundo Turno\n");
			else printf ("Primeiro Turno\n");
	} else if (vtc3>vtc2 && vtc3>vtc1){
		if (vtc3<=vttot/2) printf ("Segundo Turno\n");
			else printf ("Primeiro Turno\n");
	}
	
return 0;
}
