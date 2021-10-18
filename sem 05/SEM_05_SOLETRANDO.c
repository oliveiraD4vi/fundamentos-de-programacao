#include <stdio.h>

int main(){
	int i;
	char palavra[100], aux[100];
	scanf ("%[^\n]", palavra);
	
	for (i=0;i<100;i++){
		char aux = palavra[i];
		if (aux!='\0'){
			if (i==0) printf ("%c", aux);
			else printf ("-%c", aux);
		} else break;
	}
	
//	printf ("\n%s", palavra);
	
	return 0;
}
