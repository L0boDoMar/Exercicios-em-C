#include<stdio.h>

#include<stdlib.h>


//função sem retorno
void soma(int a,float b){ 

float resultado;

resultado=a+b;	

printf("\nA soma é: %.2f\n",resultado);	

}



int main(){

int n1;

float n2;



n1=20;

n2=5.5;



soma(n1,n2); //chamada de função soma(20,5.5)



system("pause");

return 0;	

}
