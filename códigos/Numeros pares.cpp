#include<stdio.h>

#include<stdlib.h>



int par(int n){

int cont,i;



for(i=1;i<=n;i++){

	if(i%2==0){

		cont++;

	}

}	

return cont;	

}





int main(){

int num,res;



printf("Digite um n�mero\n");

scanf("%d",&num);



res=par(num); //chamda da fun��o



printf("\nH� %d n�meros pares\n",res);



system("pause");

return 0;

}
