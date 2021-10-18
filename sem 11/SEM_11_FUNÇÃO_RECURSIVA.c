#include <stdio.h>

int funcao (int n, int m);

int main(){
	int m, n;
	scanf ("%d %d", &n, &m);
	
	int valor = funcao(n,m);
	
	printf ("%d", valor);
	
	return 0;
}

int funcao (int n, int m){
	
	int vh;
	if (n==1) return m+1;
	else if (m==1) return n+1;
	else if (m>1&&n>1) vh = funcao(m,n-1)+funcao(m-1,n);
	
	return vh;
}
