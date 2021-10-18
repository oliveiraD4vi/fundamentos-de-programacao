#include <stdio.h>

int fibonacci(int n);

int main(){
	int n;
	scanf ("%d", &n);
	
	int numero = fibonacci(n);
	
	printf ("%d", numero);
	
	return 0;
}

int fibonacci(int n){
	
	int f;
	if (n==1) return 1;
	else if (n==2) return 1;
	else return (fibonacci(n-1)+fibonacci(n-2));
}
