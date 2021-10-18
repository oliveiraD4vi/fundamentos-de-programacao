/*
AP3: RECURSÃO DO PROFESSOR FÁBIO V2
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>

int fabio(int n, int m);

int main(){
	
	int n, m;
	scanf ("%d %d", &n, &m);
	
	int valor = fabio(n, m);
	
	printf ("%d", valor);
	
	return 0;
}

int fabio(int n, int m){
	
	if (n<3 || m<3) return 1;
	else if (n%2==0 && m%2!=0) return fabio(n-1,m)+1;
	else if (n%2!=0 && m%2==0) return fabio(n-1,m-2)+2;
	else if (n%2==0 && m%2==0) return fabio(n-2,m-1)+3;
	else if (n%2!=0 && m%2!=0) return fabio(n,m-1)+4;
}
