#include <stdio.h>

int fatorial(int n);

int main(){
	int num;
	scanf ("%d", &num);
	
	int fat = fatorial(num);
	printf ("%d", fat);
	
	return 0;
}

int fatorial(int n){
	
	int pfat;
	if (n==0) return 1;
	else pfat = n* fatorial(n-1);
	return pfat;
}
