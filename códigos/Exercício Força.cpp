#include<stdio.h>

#include<stdlib.h>



float forca(float,float); //protótipo da função



int main(){

float f,m,a;



printf("Digite o valor da massa\n");

scanf("%f",&m);	

printf("Digite o valor da aceleração\n");

scanf("%f",&a);



f=forca(m,a); //chamada da função



printf("\nO valor da força é %.2f\n",f);	



system("pause");

return 0;

}



float forca(float ma,float ace){

float forc;

forc=ma*ace;

return forc;	

}


