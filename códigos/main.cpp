#include<stdio.h>
#include<stdlib.h>

int i;
float n, acum, acumed, med;

int main()
{

    for (i = 0; i < 2; i++)
    {

        printf("\nDigite um n�mero\n");

        scanf("%f", &n);

        acumed += n; 

        if (n < 50)
        {

            acum += n; 
        }

    } 

    med = acumed / 2; 

    printf("\nA m�dia dos n�meros � %.2f\n", med);

    printf("\nA somat�ria dos n�meros menos do que 50 � %.2f\n", acum);

    system("pause");

    return 0;
}
