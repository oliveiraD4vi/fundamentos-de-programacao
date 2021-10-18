#include <stdio.h>
int vogais(char frase[], int i);
int consoantes(char frase[], int i);

int main(){
	int n, i, contV=0, contC=0;
	scanf ("%d", &n);
	int valorV[n], valorC[n];
	char frase[n];
	scanf (" %[^\n]", frase);
	
	for (i=0;frase[i]!='\0';i++){
		valorV[i] = vogais(frase,i);
		valorC[i] = consoantes(frase,i);
	}
	
	for (i=0;frase[i]!='\0';i++){
		if (valorV[i]==1) contV++;
		if (valorC[i]==1) contC++;
	}
	
	printf ("%d %d", contV, contC);
	return 0;
}

int vogais(char frase[], int i){
	
	int aux;
	if (frase[i]=='a'||frase[i]=='A') aux = 1;
		else if (frase[i]=='e'||frase[i]=='E') aux = 1;
		else if (frase[i]=='i'||frase[i]=='I') aux = 1;
		else if (frase[i]=='o'||frase[i]=='O') aux = 1;
		else if (frase[i]=='u'||frase[i]=='U') aux = 1;
		else aux = 0;
	
	if (aux==1) return 1;
		else return 0;
}

int consoantes(char frase[], int i){
	
	int aux;
	if (frase[i]=='b'||frase[i]=='B') aux = 1;
		else if (frase[i]=='c'||frase[i]=='C') aux = 1;
		else if (frase[i]=='d'||frase[i]=='D') aux = 1;
		else if (frase[i]=='f'||frase[i]=='F') aux = 1;
		else if (frase[i]=='g'||frase[i]=='G') aux = 1;
		else if (frase[i]=='h'||frase[i]=='H') aux = 1;
		else if (frase[i]=='j'||frase[i]=='J') aux = 1;
		else if (frase[i]=='k'||frase[i]=='K') aux = 1;
		else if (frase[i]=='l'||frase[i]=='L') aux = 1;
		else if (frase[i]=='m'||frase[i]=='M') aux = 1;
		else if (frase[i]=='n'||frase[i]=='N') aux = 1;
		else if (frase[i]=='p'||frase[i]=='P') aux = 1;
		else if (frase[i]=='q'||frase[i]=='Q') aux = 1;
		else if (frase[i]=='r'||frase[i]=='R') aux = 1;
		else if (frase[i]=='s'||frase[i]=='S') aux = 1;
		else if (frase[i]=='t'||frase[i]=='T') aux = 1;
		else if (frase[i]=='v'||frase[i]=='V') aux = 1;
		else if (frase[i]=='w'||frase[i]=='W') aux = 1;
		else if (frase[i]=='x'||frase[i]=='X') aux = 1;
		else if (frase[i]=='y'||frase[i]=='Y') aux = 1;
		else if (frase[i]=='z'||frase[i]=='Z') aux = 1;
		else aux = 0;
	
	if (aux==1) return 1;
		else return 0;
}
