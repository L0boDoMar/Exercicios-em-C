/*Dada uma matriz de dimensão 3x6, calcule a soma de
cada coluna dessa matriz e armazene esses valores
num vetor. Imprima a matriz e o vetor.*/

#include<stdio.h>
#include<stdlib.h>

int mat[3][6],vet[6],i,j;

int main(){
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
		
		
		printf("Digite um valor:\n");
		scanf("%d",&mat[i][j]);
		
		vet[j]=vet[j]+mat[i][j];
	}
	}
	
	//impressão da matriz
	for(i=0;i<3;i++){
		for(j=0;j<6;j++)
		
		printf("Matriz posicao [%d][%d] = %d\n",i,j,mat[i][j]);
	}
	//impressão do vetor
	for(j=0;j<6;j++){
		printf("Somatoria da coluna %d = %d\n",j,vet[j]);
	}
	
	
	
	system("pause");
	return 0;
}


