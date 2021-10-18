#include <stdio.h>

int main(){
	int soma=0, n, num;
	scanf ("%d", &n);
	
	for (int i=1;i<=n;i++){
		scanf ("%d", &num);
		if (num%2==0)
		soma+=num;
		else soma-=num;
	}
	
	printf ("%d", soma);
	
	return 0;
}
