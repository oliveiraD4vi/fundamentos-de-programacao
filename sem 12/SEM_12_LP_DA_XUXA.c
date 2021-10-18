#include <stdio.h>

void inverter_cadeia(char frase[]);

int main(){
	char palavra0[100];
	scanf ("%[^\n]", palavra0);
	
	inverter_cadeia (palavra0);
	
	return 0;
}

void inverter_cadeia(char frase[]){
	
	int i, j, cont=0;
	for (i=0;i<100;i++){
		if (frase[i]=='\0') break;
		cont++;	
	}

	char palavra[cont];
	for (i=0,j=cont-1;i<cont&&j>-1;i++,j--){
		if (frase[i]=='\0') break;
		palavra[j] = frase[i];
	}
	
	for (i=0;i<cont;i++){
		if (palavra[i]=='\0') break;
		frase[i] = palavra[i];
	}
	
	printf ("\n%s", frase);
}
