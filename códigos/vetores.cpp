#include<stdio.h>
#include<stdlib.h>

int v[10],i;

int main(){
	for(i=0;i<10;i++){
		printf("Digite um valor:\n");
		scanf("%d",&v[i]);
	}
		printf("\nPosi��o 5[%d]=%d\n",i,v[4]);
		printf("\nPosi��o 8[%d]=%d\n",i,v[7]);
}
