
#include<stdio.h>

#include<stdlib.h>



float forca(float,float); //prot�tipo da fun��o



int main(){

float m,a;



printf("Digite o valor da massa\n");

scanf("%f",&m);	

printf("Digite o valor da acelera��o\n");

scanf("%f",&a);



printf("\nO valor da for�a � %.2f\n",forca(m,a));	



system("pause");

return 0;

}



float forca(float ma,float ace){

return ma*ace;	

}
