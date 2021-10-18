#include <stdio.h>
#include <stdlib.h>

/*

ipca[0] = Alimentação e bebidas (23,12%)
ipca[1] = Artigos de residência (4,69%)
ipca[2] = Transportes (20,54%)
ipca[3] = Comunicação (4,96%)
ipca[4] = Despesas pessoais (9,94%)
ipca[5] = Habitação (14,62%)
ipca[6] = Saúde e cuidados pessoais (11,09%)
ipca[7] = Vestuário (6,67%)
ipca[8] = Educação (4,37%)

*/

float ipca(float precoAnterior[], float precoAtual[], int n);

int main(){
	int i, n=9;
	
	float precoAnt[9], precoAt[9];
	for (i=0;i<n;i++) scanf ("%f", &precoAnt[i]);
	for (i=0;i<n;i++) scanf ("%f", &precoAt[i]);
	
	float IPCA = ipca(precoAnt, precoAt, n)*100;
	
	printf ("%.4f", IPCA);
	printf ("%");
	
	return 0;
}

float ipca(float precoAnterior[], float precoAtual[], int n){
	
	float variaPreco[n], ipca;
	int i;
	for (i=0;i<n;i++) variaPreco[i] = (precoAtual[i]-precoAnterior[i])/precoAnterior[i];
	
	ipca = variaPreco[0]*0.2312 + variaPreco[1]*0.0469 + variaPreco[2]*0.2054 + variaPreco[3]*0.0496;
	ipca = ipca + variaPreco[4]*0.0994 + variaPreco[5]*0.1462 + variaPreco[6]*0.1109 + variaPreco[7]*0.0667 + variaPreco[8]*0.0437;
	
	return ipca;
}
