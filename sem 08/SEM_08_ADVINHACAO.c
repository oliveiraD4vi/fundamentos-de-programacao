#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int num, jogador;
	srand (time(NULL));

	num = rand() % 1024 + 1;

	while (num!=jogador){
		scanf ("%d",&jogador);
    	
		if (jogador<num) printf ("Menor\n");
    	else if (jogador>num) printf ("Maior\n");
    	else if (jogador==num) {
    		printf ("Acertou");
    		break;
		}
  	}
	
	return 0;
}
