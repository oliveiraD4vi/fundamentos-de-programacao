//Verifica se um número pertence a uma PA
#include <stdio.h>

int verifica_pa(int primeiro_e, int razao, int num){
	int i, ver, elmnts[1000];
	elmnts[0] = primeiro_e;
	for (i=1;i<1000;i++){
		elmnts[i]=elmnts[i-1]+razao;
	}
	
	for (i=0;i<1000;i++){
		if (elmnts[i]==num){
			ver = 1;
			break;
		} else ver = 0;
	}
	
	return ver;
}

int main(){
	int p, r, num;
	scanf ("%d %d %d", &p, &r, &num);
	
	int A = verifica_pa(p,r,num);
	
	if (A==1) printf ("SIM");
	else printf ("NAO");
	
	return 0;
}
