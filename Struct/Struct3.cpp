#include<stdio.h>
#include<stdlib.h>

struct FichaAluno{

	char nome[40],disc[30];

	float n1,n2,med;

};

FichaAluno aluno;

void calculo(){
	
	printf("Digite a nota 1\n");
	scanf("%f",&aluno.n1);
	printf("Digite a nota 2\n");
	scanf("%f",&aluno.n2);
	
	aluno.med=(aluno.n1+aluno.n2)/2;
	
}

int main(){

//inserir dados na estrutura

printf("\nDigite seu nome\n");
scanf(" %[^\n]",&aluno.nome);	
printf("\nDigite o nome da disciplina\n");
scanf(" %[^\n]",&aluno.disc);

calculo();

//imprimir os dados da estrutura

printf("\nNome do aluno: %s\n",aluno.nome);
printf("\nNome da disciplina: %s \n",aluno.disc);
printf("\nNota 1: %.2f e Nota 2: %.2f\n",aluno.n1,aluno.n2);	

	if(aluno.med<4){
		
	printf("\nReprovado com a media: %.2f\n",aluno.med);
	
	} else if((aluno.med>=4) && (aluno.med<6) ){
	
	printf("\nEm Exame com a media: %.2f\n",aluno.med);
	
	} else{
		
	printf("\nAprovado com a media: %.2f\n",aluno.med);	
		
	}

system("pause");	

return 0;	

}
