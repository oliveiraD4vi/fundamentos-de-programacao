#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conta_palavras(char frase[]);
void copia(char frase[], char palavra[], int k);
void tamanho_palavra(char frase[], int vet[]);

int main(){
	char frase[500], seq[500];
//	scanf ("%[^\n]", frase);
	scanf (" %[^\n]", seq);
	
	int i, q = conta_palavras(seq);
	int palavras[q], tam[q];
	for (i=0;i<q;i++) tam[i] = 0;
	
	tamanho_palavra(seq,tam);
	
	for (i=0;i<q;i++) printf ("%d ", tam[i]);
	
	return 0;
}

int conta_palavras(char frase[]){
	
	int i, cont=1, n=0;
	for (i=0;frase[i]!='\0';i++) if (frase[i]==' ') cont++;
	for (i=0;frase[i]!='\0';i++) n++;
	
	if (frase[n-1]==' ') cont--;
	
	return cont;
}

//EU SOU O AMOR DA MINHA VIDA

void tamanho_palavra(char frase[], int tam[]){
	
	int i, k=0;
	int t = conta_palavras(frase);
	int r = strlen(frase);
	for (i=0;frase[i]!='\0';i++){
		if (k=0){
			if (frase[i]==' '){
				tam[k]=i;
				k++;
			}
		} else {
			if (frase[i]==' '){
				tam[k]=i-tam[k-1];
				k++;
			}
		}
	}
	
	tam[t-1] = (r-1)-tam[t-2];
	
	return;
}

void copia(char frase[], char palavra[], int k){
	
	
}
