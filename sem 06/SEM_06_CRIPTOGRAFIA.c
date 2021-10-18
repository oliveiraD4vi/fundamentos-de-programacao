#include <stdio.h>

void cripto_tenis_polar(char frase[]){	
/*
T E N I S
P O L A R
*/
	
	int i;
	for (i=0;frase[i]!='\0';i++){
		if (frase[i]=='t') frase[i] = 'p';
		else if (frase[i]=='p') frase[i] = 't';
		
		if (frase[i]=='e') frase[i] = 'o';
		else if (frase[i]=='o') frase[i] = 'e';
		
		if (frase[i]=='n') frase[i] = 'l';
		else if (frase[i]=='l') frase[i] = 'n';
		
		if (frase[i]=='i') frase[i] = 'a';
		else if (frase[i]=='a') frase[i] = 'i';
		
		if (frase[i]=='s') frase[i] = 'r';
		else if (frase[i]=='r') frase[i] = 's';
	}
	
	return;
}

int main(){
	char caracteres[100];
	scanf ("%[^\n]", caracteres);
	
	cripto_tenis_polar(caracteres);
	
	printf ("%s", caracteres);
	
	return 0;
}
