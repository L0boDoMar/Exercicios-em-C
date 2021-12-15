#include<stdio.h>

#include<stdlib.h>



void incremento(int n,int *v){

	int i;

	for(i=0;i<n;i++){

		*(v+i)= *(v+i)+3;

	}

}



int main(){

int *p,i;



p=(int*)malloc(3*sizeof(int));



for(i=0;i<3;i++){

	printf("Digite um número\n");

	scanf("%d",(p+i));

}



incremento(3,p);



for(i=0;i<3;i++){

	printf("\n%d\n",*(p+i));

}

free(p);

system("pause");

return 0;	

}
