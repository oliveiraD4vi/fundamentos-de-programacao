#include <stdio.h>
void transformar_maiuscula(char frase[]);
int verifica_letra(char frase[]);

int main(){
	char cadeia[200];
	scanf ("%[^\n]", cadeia);
	
	int ver = verifica_letra(cadeia), i;
	
	if (ver==1){
		transformar_maiuscula(cadeia);
		printf ("%s", cadeia);
	} else {
		scanf (" %[^\n]", cadeia);
		transformar_maiuscula(cadeia);
		printf ("%s", cadeia);
	}
	
	return 0;
}

void transformar_maiuscula(char frase[]){
	
	int i;
	for (i=0;frase[i]!='\0';i++){
		if (frase[i]=='a') frase[i] = 'A';
		else if (frase[i]=='b') frase[i] = 'B';
		else if (frase[i]=='c') frase[i] = 'C';
		else if (frase[i]=='d') frase[i] = 'D';
		else if (frase[i]=='e') frase[i] = 'E';
		else if (frase[i]=='f') frase[i] = 'F';
		else if (frase[i]=='g') frase[i] = 'G';
		else if (frase[i]=='h') frase[i] = 'H';
		else if (frase[i]=='i') frase[i] = 'I';
		else if (frase[i]=='j') frase[i] = 'J';
		else if (frase[i]=='k') frase[i] = 'K';
		else if (frase[i]=='l') frase[i] = 'L';
		else if (frase[i]=='m') frase[i] = 'M';
		else if (frase[i]=='n') frase[i] = 'N';
		else if (frase[i]=='o') frase[i] = 'O';
		else if (frase[i]=='p') frase[i] = 'P';
		else if (frase[i]=='q') frase[i] = 'Q';
		else if (frase[i]=='r') frase[i] = 'R';
		else if (frase[i]=='s') frase[i] = 'S';
		else if (frase[i]=='t') frase[i] = 'T';
		else if (frase[i]=='u') frase[i] = 'U';
		else if (frase[i]=='v') frase[i] = 'V';
		else if (frase[i]=='w') frase[i] = 'W';
		else if (frase[i]=='x') frase[i] = 'X';
		else if (frase[i]=='y') frase[i] = 'Y';
		else if (frase[i]=='z') frase[i] = 'Z';
	}
	
	return;
	
}

int verifica_letra(char frase[]){
	
	int i, aux;
	for (i=0;frase[i]!='\0';i++){
		if (frase[i]=='a'||frase[i]=='A') aux = 1;
		else if (frase[i]=='b'||frase[i]=='B') aux = 1;
		else if (frase[i]=='c'||frase[i]=='C') aux = 1;
		else if (frase[i]=='d'||frase[i]=='D') aux = 1;
		else if (frase[i]=='e'||frase[i]=='E') aux = 1;
		else if (frase[i]=='f'||frase[i]=='F') aux = 1;
		else if (frase[i]=='g'||frase[i]=='G') aux = 1;
		else if (frase[i]=='h'||frase[i]=='H') aux = 1;
		else if (frase[i]=='i'||frase[i]=='I') aux = 1;
		else if (frase[i]=='j'||frase[i]=='J') aux = 1;
		else if (frase[i]=='k'||frase[i]=='K') aux = 1;
		else if (frase[i]=='l'||frase[i]=='L') aux = 1;
		else if (frase[i]=='m'||frase[i]=='M') aux = 1;
		else if (frase[i]=='n'||frase[i]=='N') aux = 1;
		else if (frase[i]=='o'||frase[i]=='O') aux = 1;
		else if (frase[i]=='p'||frase[i]=='P') aux = 1;
		else if (frase[i]=='q'||frase[i]=='Q') aux = 1;
		else if (frase[i]=='r'||frase[i]=='R') aux = 1;
		else if (frase[i]=='s'||frase[i]=='S') aux = 1;
		else if (frase[i]=='t'||frase[i]=='T') aux = 1;
		else if (frase[i]=='u'||frase[i]=='U') aux = 1;
		else if (frase[i]=='v'||frase[i]=='V') aux = 1;
		else if (frase[i]=='w'||frase[i]=='W') aux = 1;
		else if (frase[i]=='x'||frase[i]=='X') aux = 1;
		else if (frase[i]=='y'||frase[i]=='Y') aux = 1;
		else if (frase[i]=='z'||frase[i]=='Z') aux = 1;
		else aux = 0;
	}
	
	if (aux==1) return 1;
	else return 0;
	
}
