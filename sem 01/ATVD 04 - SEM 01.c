#include <stdio.h>
#include <stdlib.h>

int main(){
	float n1, n2, n3, media, maior, menor, dif;
	scanf ("%f %f %f", &n1, &n2, &n3);
	
	media = (n1+n2+n3)/3;
	
	if (n1>n2 && n1>n3){
		maior = n1;
	} else if (n2>n1 && n2>n3){
		maior = n2;
	} else if (n3>n2 && n3>n1)
		maior = n3;
		
	if (n1<n2 && n1<n3){
		menor = n1;
	} else if (n2<n1 && n2<n3){
		menor = n2;
	} else if (n3<n2 && n3<n1)
		menor = n3;
	
	dif = maior - menor;
	
	if (media >= 7) {
		printf ("Aprovado");
	} else if (media > 5 && n3 >= 7) {
				printf ("Aprovado");
			} else if (dif <= 3)
						printf ("Aprovado");
						else printf ("Reprovado");
	
	return 0;
}
