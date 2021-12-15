#include<stdio.h>
#include<stdlib.h>

int v[3],i;

int main(){
	for(i=0;i<3;i++){
		printf("Digite um valor:\n");
		scanf("%d",&v[i]);
	}
	for (i=0;i<3;i++){
		printf("\nVetor[%d]=%d\n",i,v[i]);
	}
	system("pause");
	return 0;	
}
