/*
AP2: CONTAR OCORRÊNCIA DE MÚLTIPLOS
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>

int eh_multiplo(int a, int b);
int contar_multiplos(int vetor[], int n, int b);

int main(){
	int i, n, m; 
	scanf ("%d %d", &n, &m); //recebe o tamanho dos vetores
	
	int vetN[n], vetNR[n], vetM[m];
	for (i=0;i<n;i++) scanf ("%d", &vetN[i]); //recebe os elementos do vetor N
	for (i=0;i<m;i++) scanf ("%d", &vetM[i]); //recebe os elementos do vetor M
	
	for (i=0;i<n;i++) //armazena a quantidade de múltiplos de cada valor do vetor N no vetor resultado (NR)
		vetNR[i] = contar_multiplos(vetM, m, vetN[i]); 
	
	for (i=0;i<n;i++) printf ("%d ", vetNR[i]); //imprime os resultados
	
	return 0;
}

int eh_multiplo(int a, int b){
	
	if (b%a==0) return 1; //se b for divisível por a, retorna VERDADEIRO (1)
	else return 0; //se não for, retorna FALSO (0)
}

int contar_multiplos(int vetor[], int n, int b){
	
	int i, cont=0;
	for (i=0;i<n;i++) { //se o valor do vetor for divisível por b, o contador aumenta
		if (eh_multiplo(b, vetor[i])==1) cont++; 
	}
	
	return cont;
}
