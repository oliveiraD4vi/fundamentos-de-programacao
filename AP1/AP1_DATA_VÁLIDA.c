//AP1 - Q1
//VERIFICAR A DATA VÁLIDA

#include <stdio.h>

int main(){
	int dia, mes, ano; 
	scanf ("%d %d %d", &dia, &mes, &ano);
	
	if (ano%400==0 || ano%4==0 && ano%100!=0){ 
		if (mes<=12 && mes>0){ 
			if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
				if (dia>0 && dia<=31){
					printf ("valida");
				} else printf ("invalida");
			} else if (mes==2){
				if (dia>0 && dia<=29){
					printf ("valida");
				} else printf ("invalida");
			} else if (mes==4 || mes==6 || mes==9 || mes==11){
				if (dia>0 && dia<=30){
					printf ("valida");
				} else printf ("invalida");
			}
		} else printf ("invalida");
	} else {
		if (mes<=12 && mes>0){
			if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
				if (dia>0 && dia<=31){
					printf ("valida");
				} else printf ("invalida");
			} else if (mes==2){
				if (dia>0 && dia<=28){
					printf ("valida");
				} else printf ("invalida");
			} else if (mes==4 || mes==6 || mes==9 || mes==11){
				if (dia>0 && dia<=30){
					printf ("valida");
				} else printf ("invalida");
			} 
		} else printf ("invalida");
	}
	
	return 0;
}
