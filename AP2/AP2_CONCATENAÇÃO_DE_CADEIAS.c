/*
AP2: CONCATENAÇÃO DE DUAS CADEIAS DE CARACTERES
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>

void copia(char dest[], char orig[]); //copia uma string para a outra
int conta_tamanho(char frase[]); //retorna o tamanho da frase
void concatenar(char s1[], char s2[], char s3[]); //concatena as strings

int main(){
	char frase1[100], frase2[100];
	scanf ("%[^\n]", frase1); //recebe a primeira frase
	scanf (" %[^\n]", frase2); //recebe a segunda frase
	
	int tamanhoA = conta_tamanho(frase1); //calcula tamanho da primeira frase
	int tamanhoB = conta_tamanho(frase2); //calcula tamanho da segunda frase
	int tamanho = tamanhoA + tamanhoB; //determina o tamanho da terceira frase
	
	char frase3[tamanho];
	
	concatenar(frase1,frase2,frase3); //chama a função determinada anteriormente
	
	printf ("%d", tamanho); //imprime o tamanho
	printf ("\n%s", frase3); //imprime a frase
	
	return 0;
}

int conta_tamanho(char frase[]){
	
	int i, cont=0;
	for (i=0;frase[i]!='\0';i++) cont++; //conta os índices úteis na cadeia
	
	return cont;
}

void concatenar(char s1[], char s2[], char s3[]) {
    
    copia(s3,s1); //copia a frase1 para a frase3
    
	int i, j;
    i = conta_tamanho(s1);
    
    for (j = 0; s2[j] != 0; i++, j++) s3[i] = s2[j]; //concatena a frase 2 à frase 3
    s3[i] = 0;
}

void copia(char dest[], char orig[]){
	
	int i;
	
	for (i=0;i<conta_tamanho(orig);i++) dest[i] = orig[i]; //copia a origem para o destino
	dest[i] = 0;
}
