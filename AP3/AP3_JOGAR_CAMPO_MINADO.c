/*
AP3: JOGO CAMPO MINADO
ALUNO: DAVI SILVA ALVES DE OLIVEIRA
MATRÍCULA: 497390
*/

#include <stdio.h>

int main(){
	
	int n;
	scanf ("%d", &n);
	
	int i, j, matriz[n][n];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf ("%d", &matriz[i][j]);
		
	int pontos=0, lin, col;
	scanf ("%d %d", &lin, &col);
	
	if (matriz[lin][col]<0) printf ("Perdeu!");
	else{
		pontos = matriz[lin][col];
		
//	Testa a localização, analisando caso por caso, para que não haja erro na soma dos pontos
		if (lin==0 && col==0) pontos += matriz[lin+1][col] + matriz[lin][col+1];
		else if (lin==0 && col==n-1) pontos += matriz[lin+1][col] + matriz[lin][col-1];
		else if (lin==n-1 && col==0) pontos += matriz[lin-1][col] + matriz[lin][col+1];
		else if (lin==n-1 && col==n-1) pontos += matriz[lin-1][col] + matriz[lin][col-1];
		else if (lin==0 && col!=0 && col!=n-1) pontos += matriz[lin+1][col] + matriz[lin][col-1] + matriz[lin][col+1];
		else if (lin!=0 && lin!=n-1 && col==0) pontos += matriz[lin-1][col] + matriz[lin+1][col] + matriz[lin][col+1];
		else if (lin==n-1 && col!=0 && col!=n-1) pontos += matriz[lin-1][col] + matriz[lin][col-1] + matriz[lin][col+1];
		else if (lin!=0 && lin!=n-1 && col==n-1) pontos += matriz[lin-1][col] + matriz[lin+1][col] + matriz[lin][col-1];
		else if (lin!=0 && lin!=n-1 && col!=0 && col!=n-1) pontos += matriz[lin-1][col] + matriz[lin+1][col] + matriz[lin][col-1] + matriz[lin][col+1];
		
//		imprime os pontos
		printf ("%d", pontos);
	}
	
	return 0;
}
