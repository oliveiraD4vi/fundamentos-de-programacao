#include <stdio.h>

void fibonacci(int f, int n, int a);

int main(){
	int n, f=0, a=0;
	scanf ("%d", &n);
	
	fibonacci(f, n, a);
	
	printf ("%d %d", a, f);
	
	return 0;
}

void fibonacci(int f, int n, int a){
	
	a++;
	if (n==1) f = 1;
	else if (n==2) f = 1;
	else fibonacci(f, n-1, a);
	return;
}
