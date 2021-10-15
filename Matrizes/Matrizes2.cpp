/*Na aula de algoritmos, os alunos desenvolveram uma matriz do tipo 3x3,
 onde aij=2i+2j.Em um determinado momento o computador foi solicitado a  
 mostrar, na tela,a matriz calculada. Faça o algoritmo, onde a matriz a
  ser mostrada na tela é:*/


#include<stdio.h>
#include<stdlib.h>

int mat[3][3],i,j;

int main(){
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			mat[i][j]=(2*(i+1))+(2*(j+1));
		}
	}
	for (i=0;i<3;i++){
	for(j=0;j<3;j++){
		printf("O valor armazenado na posicao [%d][%d] e  %d\n",i,j,mat[i][j]);
	
	}
}
system("pause");
return 0;	
}
