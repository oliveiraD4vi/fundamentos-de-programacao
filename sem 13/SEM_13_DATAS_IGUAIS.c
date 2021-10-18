#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
		int dia;
		int mes;
     	int ano;
	}Data;
	
int datasIguais(Data dt1, Data dt2);	

int main(){
	
	Data d1;
	scanf ("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
	
	Data d2;
	scanf ("%d %d %d", &d2.dia, &d2.mes, &d2.ano);
	
	int valor = datasIguais(d1,d2);
	
	if (valor==0) printf ("Diferentes");
	else printf ("Iguais");
	
	return 0;
}

int datasIguais(Data dt1, Data dt2){
	
	if (dt1.ano!=dt2.ano) return 0;
	else if (dt1.dia!=dt2.dia) return 0;
	else if (dt1.mes!=dt2.mes) return 0;
	else return 1;
}
