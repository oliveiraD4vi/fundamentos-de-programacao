#include <stdio.h>
#include <math.h>

int calcularRaizes(int a, int b, int c, float raizes[]);

int main(){
	int valor, c_A, c_B, c_C, i;
	float raizes[2];
	scanf ("%d %d %d", &c_A, &c_B, &c_C);
	
	valor = calcularRaizes(c_A, c_B, c_C, raizes);
	printf ("%d", valor);
	
	if (valor=0){
		raizes[0] = 0;
		raizes[1] = 0;
	}
	
	for (i=0;i<2;i++) printf ("%.0f.00", raizes[i]);
	
	return 0;
}

int calcularRaizes(int a, int b, int c, float raizes[]){
	
	float delta = (b*b)-(4*a*c);
	float rz = sqrt(delta);
	float x0 = ((-1*b)+rz)/2*a;
	float x1 = ((-1*b)+(-1*rz))/2*a;
	
	raizes[0] = x0;
	raizes[1] = x1;
	
	if (delta<0) return 0;
	else return 1;
}
