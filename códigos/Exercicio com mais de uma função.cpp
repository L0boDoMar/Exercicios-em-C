#include<stdio.h>
#include<stdlib.h>

#include<stdio.h>

#include<stdlib.h>



float area(float b,float a){

return b*a;

}



float perimetro(float ba,float al){

return 2*(ba+al);	

}



int main(){

float a,p,base,alt;



printf("Digite o valor da base\n");

scanf("%f",&base);

printf("Digite o valor da altura\n");

scanf("%f",&alt);



a=area(base,alt); //chamada da fun��o area

p=perimetro(base,alt); // chamada da fun��o perimetro



printf("\nA �rea do ret�ngulo � %.2f e o per�metro � %.2f\n",a,p);



system("pause");

return 0;

}
