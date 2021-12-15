#include<stdio.h>
#include<stdlib.h>

int v[10],i;

int main(){
	for(i=0;i<10;i++){
		printf("Digite um valor:\n");
		scanf("%d",&v[i]);
	}
		printf("\nPosição 5[%d]=%d\n",i,v[4]);
		printf("\nPosição 8[%d]=%d\n",i,v[7]);
}
