#include<stdio.h>

#include<stdlib.h>



int fatorial(int n){

int i,fat=1;	



for(i=n;i>0;i--){

	fat=fat*i; //fat*=i;

} //for

return fat;	

}





int main(){

int f,num;



printf("Digite um n�mero\n");

scanf("%d",&num);



f=fatorial(num); //chamada da fun��o



printf("\nO fatorial do n�mero %d � %d\n",num,f);



system("pause");

return 0;

}
