#include <stdio.h>

int conta_letra(char frase[], char letra);

int main(){
	char cont_letras[5], letra[]="aeiou", frase[150];
	scanf ("%[\n]", frase);
	
//	int teste = conta_letra(frase,letra[2]);
//	printf ("%d", cont);
	
	int i;
	for (i=0;i<5;i++) cont_letras[i] = conta_letra(frase, letra[i]);
	for (i=0;i<5;i++) printf ("%d ", cont_letras[i]);

	return 0;
}

int conta_letra(char frase[], char letra){
	
	int i=0, cont=0;
//	printf ("%c", letra);
	for (i=0;frase[i]!='\0';i++){
		if (letra=='a'){
			if (frase[i]=='a' || frase[i]=='A') cont++;
		} else if (letra=='e'){
			if (frase[i]=='e' || frase[i]=='E') cont++;
		} else if (letra=='i'){
			if (frase[i]=='i' || frase[i]=='I') cont++;
		} else if (letra=='o'){
			if (frase[i]=='o' || frase[i]=='O') cont++;
		} else if (letra=='u'){
			if (frase[i]=='u' || frase[i]=='U') cont++;
		} 
	}
	
	return cont;
}
