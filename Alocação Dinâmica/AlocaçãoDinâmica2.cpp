#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *idade;
	float *peso;
	char *sexo;
	char *nome;
	
	idade=(int*)malloc(sizeof(int));
	peso=(float*)malloc(sizeof(float));
	sexo=(char*)malloc(sizeof(char));
	nome=(char*)malloc(40*sizeof(char));
	
	printf("Digite seu nome:\n");
	scanf(" %[^\n]",nome);
	printf("Digite a sua idade:\n");
	scanf("%d",idade);
	printf("Digite seu peso:\n");
	scanf("%f",peso);
	printf("Digite seu sexo:\n");
	scanf(" %c",sexo);
	
	printf("Nome: %s\nIdade: %d anos\nPeso: %.2f quilos\nSexo: %c\n",nome,*idade,*peso,*sexo);

	free(nome);
	free(idade);
	free(peso);
	free(sexo);
	
	system("pause");
	return 0;
}
