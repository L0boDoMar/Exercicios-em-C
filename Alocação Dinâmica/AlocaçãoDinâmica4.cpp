#include<stdio.h>

#include<stdlib.h>



void media(int n,float*ve,float *m){

	float acum;

	int i;

	for(i=0;i<n;i++){

		acum= acum + *(ve+i);

	}

	*m=acum/n;

}



int main(){

int i,n;

float *v,med;



printf("Digite a quantidade de números para o cálculo\n");

scanf("%d",&n);



v=(float*)malloc(n*sizeof(float));



for(i=0;i<n;i++){

	printf("Digite um valor\n");

	scanf("%f",(v+i));

}



media(n,v,&med);



printf("Média é %.2f\n",med);



free(v);

system("pause");

return 0;	

}
