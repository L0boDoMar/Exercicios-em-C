#include<stdio.h>

#include<stdlib.h>



float forca(float,float); //prot�tipo da fun��o



int main(){

float f,m,a;



printf("Digite o valor da massa\n");

scanf("%f",&m);	

printf("Digite o valor da acelera��o\n");

scanf("%f",&a);



f=forca(m,a); //chamada da fun��o



printf("\nO valor da for�a � %.2f\n",f);	



system("pause");

return 0;

}



float forca(float ma,float ace){

float forc;

forc=ma*ace;

return forc;	

}


