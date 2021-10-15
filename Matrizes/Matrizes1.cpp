/*Faça um programa para preencher uma matriz 4x4 e imprimir os valores preenchidos com as respectivas posições.*/


#include<stdio.h>
#include<stdlib.h>


int mat[4][4],i,j;

int main(){
for (i=0;i<4;i++){
	for(j=0;j<4;j++){
		printf("Digite um valor para a posicao [%d][%d]\n",i,j);
		scanf("%d",&mat[i][j]);
	}
}
for (i=0;i<4;i++){
	for(j=0;j<4;j++){
		printf("O valor armazenado na posicao [%d][%d] e  %d\n",i,j,mat[i][j]);
	
	}
}		
	
	
	system("pause");
	return 0;
}
