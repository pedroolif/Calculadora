#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{

	int op, a, b ,res;

	printf("MENU -- \n\n\n 1 - SUMA \n 2 - RESTA \n 3 - MULTIPLICACION \n 4 - DIVISION \n 5 - RAIZ CUADRADA \n 6 - SENO/COSENO \n\n DIGITE EL NUMERO DE LA OPERACION DESEADA:  ");
	scanf("%d",&op);
	if(op == 1){
    printf("Digite los numeros deseados: ");
	scanf("%d",&a);
    printf("Digite los numeros deseados: ");
    scanf("%d",&b);
    res = a+b;
    printf("El resultado es: %d\n\n",res);
    }

	else if(op == 2){
    printf("Digite los numeros deseados: ");
	scanf("%d",&a);
    printf("Digite los numeros deseados: ");
    scanf("%d",&b);
    res = a-b;
    printf("El resultado es: %d\n\n",res);
    }
	else if(op == 3){
    printf("Digite los numeros deseados: ");
	scanf("%d",&a);
    printf("Digite los numeros deseados: ");
    scanf("%d",&b);
    res = a*b;
    printf("El resultado es: %d\n\n",res);
    }
	else if(op == 4){
    printf("Digite los numeros deseados: ");
	scanf("%d",&a);
    printf("Digite los numeros deseados: ");
    scanf("%d",&b);
    res = a/b;
    }
    else if (op == 5){
    printf("Digite los numeros deseados: ");
	scanf("%d",&a);
    res=sqrt(a);
    printf("El resultado es: %d\n\n",res);
    }
    else if (op == 6){
        double res1;
        int op2;
        printf("1- Seno \n2- Coseno \n");
        scanf("%d",&op2);
        printf("Digite los numeros deseados: ");
        scanf("%d",&a);

        if (op2 == 1){
            res1=sin(a);
            printf("El seno es  %.5f\t", res1);
        }
        if (op2 ==2){
            res1=cos(a);
            printf("El coseno es  %.5f\t", res1);
        }

    }
}
