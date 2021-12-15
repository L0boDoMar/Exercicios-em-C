#include<stdio.h>

#include<stdlib.h>



struct FichaAluno{

	char nome[40],disc[30];

	float n1,n2;

};



int main(){

//instanciamento

struct FichaAluno aluno;

//inser dados na estrutura

printf("Digite seu nome\n");

scanf(" %[^\n]",&aluno.nome);	

printf("Digite o nome da disciplina\n");

scanf(" %[^\n]",&aluno.disc);

printf("Digite a nota 1\n");

scanf("%f",&aluno.n1);

printf("Digite a nota 2\n");

scanf("%f",&aluno.n2);

//imprimir os dados da estrutura

printf("\nNome do aluno: %s\n",aluno.nome);

printf("\nNome da disciplina: %s \n",aluno.disc);

printf("\nNota 1: %.2f e Nota 2: %.2f\n",aluno.n1,aluno.n2);	



system("pause");	

return 0;	

}
