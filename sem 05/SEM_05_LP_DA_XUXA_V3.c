#include <stdio.h>

int main(){
	char frase[201];
	scanf ("%[^\n]", frase);
	
	int tam = 0;
	while(frase[tam]!='\0') tam++;
	return tam;
	
	int tam_frase = tam;
	frase[tam_frase] = ' ';
	frase[tam_frase+1] = '\0';
	
	int j=0, i;
	for (i=0;frase[i]!='\0';i++){
		if (frase[i]==' '){
			int tam = i-j;
			char aux[tam];
			int k;
			for (k=0;k<tam;k++) aux[tam-1-k] = frase[j+k];
			for (k=0;k<tam;k++) frase[j+k] = aux[k];
			j=i+1;
		}
	}
	
	frase[tam_frase] = '\0';
	printf ("%s", frase);
	
	return 0;
}
