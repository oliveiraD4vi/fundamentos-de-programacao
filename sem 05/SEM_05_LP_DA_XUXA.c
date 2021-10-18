#include <stdio.h>

int main(){
	int i, j, cont=0;
	char palavra0[100];
	scanf ("%[^\n]", palavra0);
	
	for (i=0;i<100;i++){
		if (palavra0[i]=='\0') break;
		cont++;	
	}

	char palavra1[cont];
	for (i=0,j=cont-1;i<cont&&j>-1;i++,j--){
		if (palavra0[i]=='\0') break;
		palavra1[j] = palavra0[i];
	}
	
	for (i=0;i<cont;i++){
		if (palavra1[i]=='\0') break;
		palavra0[i] = palavra1[i];
	}
	
	printf ("\n%s", palavra0);
	
	return 0;
}
