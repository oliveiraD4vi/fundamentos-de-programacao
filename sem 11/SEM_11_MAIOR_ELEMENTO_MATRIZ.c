#include <stdio.h>

int main(){
	int i, j, n, m;
	scanf ("%d %d", &n, &m);
	
	int aux=0, linha, coluna, maior, matriz[n][m];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) scanf ("%d", &matriz[i][j]);
	
	maior = matriz[0][0];
	for (i=0;i<n;i++)
		for (j=0;j<m;j++) if (matriz[i][j]>maior) maior = matriz[i][j];
		
	for (i=0;i<n;i++){
		if (aux==1) break;
		for (j=0;j<m;j++){
			if (matriz[i][j]==maior){
				linha = i+1;
				coluna = j+1;
				aux=1;
				break;
			}
		}
	}
	
	printf ("%d %d", linha, coluna);
	
	return 0;
}
