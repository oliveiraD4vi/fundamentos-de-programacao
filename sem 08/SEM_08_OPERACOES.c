#include <stdio.h>

int main(){
	int n, i;
	scanf ("%d", &n);
	
	int v1[n], v2[n], vetR[n];
	for (i=0;i<n;i++) scanf ("%d", &v1[i]);
	for (i=0;i<n;i++) scanf ("%d", &v2[i]);
	fflush(stdin); 
	
	char op;
	scanf ("%c", &op);
	
	for (i=0;i<n;i++){
		if (op=='+') vetR[i] = v1[i]+v2[i];
		else if (op=='-') vetR[i] = v1[i]-v2[i];
		else if (op=='*') vetR[i] = v1[i]*v2[i];
		else if (op=='/') vetR[i] = v1[i]/v2[i];
	}
	
	for (i=0;i<n;i++) printf ("%d ", vetR[i]);
	
	return 0;
}
