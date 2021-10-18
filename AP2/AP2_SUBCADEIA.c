/*
AP2: ENCONTRANDO SUBCADEIA
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>

int compara(char s1[], char s2[]); //verifica se são iguais
int conta_tamanho(char frase[]); //retorna o tamanho da frase
int sub_cadeia(char texto[], char padrao[]); //verifica se o vetor PADRAO esta contido no vetor TEXTO
int posicao(char texto[], char padrao[]); //verifica a posição de início
int testar(int teste[], int tam); //testa uma condição de existencia da função anterior

int main(){
	char cadeia[100], texto[100];
	scanf ("%[^\n]", texto);
	scanf (" %[^\n]", cadeia);
	
	int local = (posicao(texto, cadeia))-conta_tamanho(cadeia);
	int valor = sub_cadeia(texto, cadeia);
	
	if (valor==1) printf ("%d", local);
	else printf ("-1");
	
	return 0;
}

int compara(char s1[], char s2[]){
	
	int tm1 = conta_tamanho(s1);
	int tm2 = conta_tamanho(s2);
	int m = tm1;
	
	if (tm2>m) m = tm2;
	
	int i,j, aux;
	for (i=0,j=0;i<m;i++,j++){
		if (s1[i]!=s2[j]){
			aux = 0;
			break;
		} else aux = 1;
	}
	
	if (aux==1) return 1;
	else return 0;
}

int conta_tamanho(char frase[]){
	
	int i, cont=0;
	for (i=0;frase[i]!='\0';i++) cont++;
	
	return cont;
}

int testar(int teste[], int tam){
	
	int i;
	for (i=0;i<tam;i++){
		if (teste[i]==0) return 0;
	}
	
	return 1;
}

int sub_cadeia(char texto[], char padrao[]){
	
	if (conta_tamanho(padrao)>conta_tamanho(texto)) return 0;
	if (compara(texto,padrao)==1) return 1;
	
	int i, k, j, aux;
	int teste[conta_tamanho(padrao)];
	
	for (i=0;i<=conta_tamanho(texto)-conta_tamanho(padrao);i++){
		if (texto[i]==padrao[0]){
			
			for (k=0;k<conta_tamanho(padrao);k++) teste[k] = 0;
			aux = i;
			
			for (j=0;j<conta_tamanho(padrao);j++){
				if (padrao[j]==texto[aux]){
					teste[j] = 1;
					aux++;
				}
			}
			
			if (testar(teste,conta_tamanho(padrao))==1) return 1;
		}
	}
	
	return 0;
}

int posicao(char texto[], char padrao[]){
	
	if (conta_tamanho(padrao)>conta_tamanho(texto)) return 0;
	if (compara(texto,padrao)==1) return 0;
	
	int i, k, j, aux;
	int teste[conta_tamanho(padrao)];
	
	for (i=0;i<=conta_tamanho(texto)-conta_tamanho(padrao);i++){
		if (texto[i]==padrao[0]){
			
			for (k=0;k<conta_tamanho(padrao);k++) teste[k] = 0;
			aux = i;
			
			for (j=0;j<conta_tamanho(padrao);j++){
				if (padrao[j]==texto[aux]){
					teste[j] = 1;
					aux++;
				}
			}
			
			if (testar(teste,conta_tamanho(padrao))==1) return aux;
		}
	}
	
	return aux;
}
