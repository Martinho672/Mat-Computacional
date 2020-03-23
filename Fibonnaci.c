#include <stdio.h>
#include <locale.h>


void main () {
    setlocale(LC_ALL,"");

    int enesimo;
    int a = 0;
    int b = 1;
    int aux;

    printf("Digite um numero para o qual deseja calcular o Fibonnaci:\n");
    scanf("%d",&enesimo);

    printf("%d \n",a);
    printf("%d \n",b);
    for(int i = 0;i <= enesimo ;i++){

        aux = a + b;
        a = b;
        b = aux;

        printf("%d\n",aux);

    }


}
