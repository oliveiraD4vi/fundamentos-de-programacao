#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
     float x; 
     float y;
	}Ponto;

float distancia(Ponto p1, Ponto p2);

int main(){
	
	Ponto p1;
	scanf("%f", &p1.x);
	scanf("%f", &p1.y);
	
	Ponto p2;
	scanf("%f", &p2.x);
	scanf("%f", &p2.y);

	float d = distancia(p1,p2);
	
	printf ("%.2f", d);
	
	return 0;
}

float distancia(Ponto p1, Ponto p2){
	
	float valor = ((p2.x-p1.x)*(p2.x-p1.x))+((p2.y-p1.y)*(p2.y-p1.y));
	return sqrt(valor);
}
