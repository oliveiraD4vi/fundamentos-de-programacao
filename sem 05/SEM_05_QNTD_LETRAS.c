#include <stdio.h>

int main(){
	int i, cont=0;
	char frase[100], letra;
	scanf ("%[^\n] %c", frase, &letra);
	
	for (i=0;i<100;i++) if (frase[i]==letra) cont++;
	
	printf ("%d", cont);
	
	return 0;
}
