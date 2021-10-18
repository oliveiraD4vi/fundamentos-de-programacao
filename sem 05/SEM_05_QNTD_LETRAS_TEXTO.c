#include <stdio.h>

int main(){
	int i, j, n=0;
	char frase[100], palavra[100];
	scanf ("%[^\n]", frase);
	scanf (" %[^\n]", palavra);
	
	for (i=0;i<100;i++){
		if (palavra[i]!='\0') n++;
		else break;
	}
	
	int cont[n];
	for (i=0;i<n;i++) cont[i]=0;
	
	for (i=0;i<n;i++){
		for (j=0;j<100;j++){
			if (palavra[i]==frase[j]) cont[i]++;
		}
	}
	
	for (i=0;i<n;i++) printf ("%d ", cont[i]);
	
	return 0;
}
