#include <stdio.h>
#include <stdlib.h>
#include <math.h>

	typedef struct{
    	char nome[100];
    	float notas[3];
		float media;
	}Aluno;

void quem_passou(Aluno notas, float media);

int main(){
	
	int n, j, i;
	scanf ("%d", &n);
	Aluno alunos[n];
	
	for (i=0;i<n;i++){
		scanf (" %[^\n]", alunos[i].nome);
		for (j=0;j<3;j++) scanf ("%f", &alunos[i].notas[j]);
		alunos[i].media = (alunos[i].notas[0]+alunos[i].notas[1]+alunos[i].notas[2])/3;
	}
	
	float media;
	scanf ("%f", &media);
	
	for(i=0;i<n;i++) quem_passou(alunos[i],media);
	
	return 0;
}

void quem_passou(Aluno notas, float media){
	
	int i;
	if (notas.media>=media) printf ("\n%s", notas.nome);
}
