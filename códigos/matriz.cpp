#include<stdio.h>

#include<stdlib.h>



int mat[4][4],i,j;



int main(){

for(i=0;i<4;i++){

	for(j=0;j<4;j++){

	 printf("Digite o valor para %d e %d\n",i+1,j+1);

	 scanf("%d",&mat[i][j]);		

	}//interno

}//externo



for(i=0;i<4;i++){

	for(j=0;j<4;j++){

		printf("[%d][%d]=%d\n",i+1,j+1,mat[i][j]);

	}//interno

}//externo

system("pause");

return 0;	

}
