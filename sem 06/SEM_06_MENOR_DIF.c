#include <stdio.h>
float get_preco_proximo(float precos[], int n, float preco_desejado);
float diferenca(float a, float b);

int main(){
	int n, i;
	scanf ("%d", &n);
	
	float prec[n], prec_des; 
	for (i=0;i<n;i++) scanf ("%f", &prec[i]);
	scanf ("%f", &prec_des);
	
	float prec_prox = get_preco_proximo(prec, n, prec_des);
	printf ("%.2f", prec_prox);
	
	return 0;
}

//função que calcula a diferença absoluta entre dois números
float modulo(float a, float b){
	
	float dif;
	dif = a-b;
	
	if (dif>=0) dif = dif;
	else dif = dif*-1;
	
	return dif;
}

//função que calcula o valor mais próximo
float get_preco_proximo(float precos[], int n, float preco_desejado){
	
	int i;
	float vet_dif[n], menor, prec_prox;
	for (i=0;i<n;i++){
		vet_dif[i] = modulo(precos[i], preco_desejado);
	}
	
	menor = vet_dif[0];
	for (i=1;i<n;i++){
		if (vet_dif[i]<menor){
			menor = vet_dif[i];
			prec_prox = precos[i];
		}
	}
	
	return prec_prox;
}
