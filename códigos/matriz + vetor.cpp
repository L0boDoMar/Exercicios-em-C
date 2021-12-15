#include<stdio.h>
#include<stdlib.h>



int vet[6],mat[3][6],i,j;



int main(){

for(i=0;i<3;i++){

	for(j=0;j<6;j++){

	 printf("Digite o valor para %d e %d\n",i+1,j+1);

	 scanf("%d",&mat[i][j]);		
	 vet[j]= vet[j] + mat[i][j];
	}//interno

}//externo

for(i=0;i<4;i++){

	for(j=0;j<4;j++){

		printf("%d",mat[i][j]);

	}//interno
printf("\n");
} //externo
	for(j=0;j<6;j++){

		printf("\nvet[%d]=%d\n",j,vet[j]);

	}//interno



system("pause");

return 0;	

}

