
#include<stdio.h>

#include<stdlib.h>



float forca(float,float); //protótipo da função



int main(){

float m,a;



printf("Digite o valor da massa\n");

scanf("%f",&m);	

printf("Digite o valor da aceleração\n");

scanf("%f",&a);



printf("\nO valor da força é %.2f\n",forca(m,a));	



system("pause");

return 0;

}



float forca(float ma,float ace){

return ma*ace;	

}
