#include <stdio.h>

int main(){
	int valor, preco;
	scanf ("%d", &valor);
	
	if (valor>=0 && valor<=10){
		preco = 7;
		printf ("R$%d", preco);
	} else {if (valor>10 && valor<=30){
		preco = (valor-10)+7;
		printf ("R$%d", preco);
	} else {if (valor>30 && valor<=100){
		preco = ((valor-30)*2)+27;
		printf ("R$%d", preco);
	} else {if (valor>100){
		preco = ((valor-100)*5)+167;
		printf ("R$%d", preco);
	} else printf ("Invalido\n");
	}
	}
	}
	
	return 0;
}
