#include <stdio.h>

int main(){
	int n;
	scanf ("%d", &n);
	
	int aux=1, i, j, matriz[n][n];
	for (i=0;i<n;i++)
		for (j=0;j<n;j++) scanf ("%d", &matriz[i][j]);
		
	int soma, sl[n], sc[n], sdp=0, sds=0;
	for (i=0;i<n;i++) sl[i] = 0;
	for (i=0;i<n;i++) sc[i] = 0;
	
	for (i=0;i<n;i++)
		for (j=0;j<n;j++){
			sl[i] += matriz[i][j];
			sc[j] += matriz[i][j];
			if (i==j) sdp += matriz[i][j];
			if (n-1-i==j) sds += matriz[i][j];
		}
	
/*	for (i=0;i<n;i++) printf ("%d ", sl[i]);
	printf ("\n");
	for (i=0;i<n;i++) printf ("%d ", sc[i]);
	printf ("\n");
	printf ("%d\n%d", sdp, sds);
*/
	int auxA=1, num = sl[0];
	for (i=1;i<n;i++){
		if (sl[i]!=num) auxA = 0;
		if (auxA==0) break;
	}
	
	int auxB=1, numA = sc[0];
	for (i=1;i<n;i++){
		if (sc[i]!=numA) auxB = 0;
		if (auxB==0) break;
	}
	
	int auxC=1;
	if (sds!=sdp) auxC = 0;
	
//	printf ("\n%d %d %d", auxA, auxB, auxC);
	
	if (auxA==1&&auxB==1&&auxC==1) printf ("sim");
	else printf ("nao");

	return 0;		
}
