//AP1 - Q2
//QUANTOS DIAS FALTAM ATÉ O FINAL DO ANO?

#include <stdio.h>

int main(){
	int dia, mes, ano, diaT=365, diaFA=0;
	scanf ("%d %d %d", &dia, &mes, &ano);
	
	if (ano%400==0 || ano%4==0 && ano%100!=0){
		diaT = 366;
		if (mes==1) diaFA = diaT-dia;
		else if (mes==2) diaFA = diaT-(dia+31);
		else if (mes==3) diaFA = diaT-(dia+60);
		else if (mes==4) diaFA = diaT-(dia+91);
		else if (mes==5) diaFA = diaT-(dia+121);
		else if (mes==6) diaFA = diaT-(dia+152);
		else if (mes==7) diaFA = diaT-(dia+182);
		else if (mes==8) diaFA = diaT-(dia+213);
		else if (mes==9) diaFA = diaT-(dia+244);
		else if (mes==10) diaFA = diaT-(dia+274);
		else if (mes==11) diaFA = diaT-(dia+305);
		else if (mes==12) diaFA = diaT-(dia+335);
	} else if (mes==1) diaFA = diaT-dia;
		else if (mes==2) diaFA = diaT-(dia+31);
		else if (mes==3) diaFA = diaT-(dia+59);
		else if (mes==4) diaFA = diaT-(dia+90);
		else if (mes==5) diaFA = diaT-(dia+120);
		else if (mes==6) diaFA = diaT-(dia+151);
		else if (mes==7) diaFA = diaT-(dia+181);
		else if (mes==8) diaFA = diaT-(dia+212);
		else if (mes==9) diaFA = diaT-(dia+243);
		else if (mes==10) diaFA = diaT-(dia+273);
		else if (mes==11) diaFA = diaT-(dia+304);
		else if (mes==12) diaFA = diaT-(dia+334);
	
	printf ("%d", diaFA);
	
	return 0;
}
