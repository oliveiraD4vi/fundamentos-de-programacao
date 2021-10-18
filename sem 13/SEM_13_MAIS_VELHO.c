#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
		int dia;
		int mes;
     	int ano;
	}Data;

int calcular_idade(Data nascimento, Data atual);
void maior_numero(int vetor[], int n);

int main(){
	
	int i, n;
	scanf ("%d", &n);
	Data vetor[n], atual;
	
	for (i=0;i<n;i++) scanf ("%d %d %d", &vetor[i].dia, &vetor[i].mes, &vetor[i].ano);
	scanf ("%d %d %d", &atual.dia, &atual.mes, &atual.ano);
	
	int idade[n];
	for (i=0;i<n;i++) idade[i] = calcular_idade(vetor[i],atual);
	
	maior_numero(idade,n);
	
	return 0;
}

int calcular_idade(Data nascimento, Data atual){
	
	int idade = (atual.ano - nascimento.ano);
	if (nascimento.mes==atual.mes){
		if (nascimento.dia==atual.dia) return idade;
			else if (nascimento.dia<atual.dia) return idade;
					else {
						idade = (idade - 1);
						return idade;
					}
	} else if (nascimento.mes<atual.mes) return idade;
			else {
				idade = (idade - 1);
				return idade;
			}
}

void maior_numero(int vetor[], int n){
	
	int i, maior=vetor[0];
	for (i=0;i<n;i++) if (vetor[i]>=maior) maior = vetor[i];
	
	printf ("%d", maior);
}
