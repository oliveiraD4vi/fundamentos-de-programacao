//Soma de uma PA finita
#include <stdio.h>

//função que calcula a soma de uma pa
float soma_pa(int primeiro_e, int qntd_e, int razao){	
	int i, elmnts[qntd_e];
	elmnts[0] = primeiro_e;
	for (i=1;i<qntd_e;i++){
		elmnts[i]=elmnts[i-1]+razao;
	}
	
	float sn = (qntd_e*(primeiro_e+elmnts[qntd_e-1]))/2;
	return sn;
}

int main(){
	int p, q, r;
	scanf ("%d %d %d", &p, &q, &r);
	
	float somapa = soma_pa(p,q,r);
	printf ("%.2f", somapa);
	
	return 0;
}
