#include<stdio.h>
#include<stdlib.h>

void media(int n, float *v, float *med){
	
int i;
float acum;
for(i=0;i<n;i++){
	
	acum += *(v+i);
		
}	
	
	*med=acum/n;
	
}

int main(){
	
	float v[10],med;
	int i;
	
	for(i=0;i<10;i++){
		
		printf("Digite um valor:\n");
		scanf("%f",(v+i));
		}
	
	media(10,v,&med);//(tamanho do vetor,nome do vetor, enderço resultado)
	
	printf("A média é %.2f\n",med);
	
	
	system("pause");
	return 0;
}
