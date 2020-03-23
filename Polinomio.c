#include <stdlib.h>
#include <stdio.h>
#include <math.h>


//Polinomio

typedef struct monomio{
    float quociente;
    int grau;
    float resultado;
}Monomio;

void calcula(Monomio* var, int x, int num, int coef);
void calcula(Monomio* var, int x, int num, int coef){

    for (int i = 0; i < num; i++){
        var[i].resultado = var[i].quociente * (pow(x,var[i].grau));
    }

    for (int i = 0; i < num; i++){
        printf("%.1f ",var[i].resultado);
    }

    if(coef > 0){
        printf("+ %d",coef);
    }
    else{
        printf("%d",coef);
    }

    printf("\n");

}

void insere(int num, Monomio* var);
void insere(int num, Monomio* var){

    int grade = num;
    int zero = 0;

    for (int i = 0; i < num; i++){

        printf("Qual é o %d° quociente ?",i+1);
        scanf("%f",&var[i].quociente);

        var[i].grau = grade;
        grade--;
    }

    printf("Qual é o coeficiente angular do polinômio ?\n");
    scanf("%d",&zero);

    for (int i = 0; i < num; i++){
        printf("%.0fx^%d ",var[i].quociente,var[i].grau);
    }

    if(zero > 0){
        printf("+ %d\n",zero);
    }
    else{
        printf("%d\n",zero);
    }
    printf("\n");

    printf("Deseja calcula uma f(x) ?\n");
    int op = 0;
    printf("1-Sim\t2-Não\t");
    scanf("%d",&op);

    if(op == 1){
        printf("Qual x deseja calcular ?\n");
        int x = 0;
        scanf("%d",&x);
        calcula(var,x,num,zero);
    }
    if(op == 2){
        exit(0);
    }
}

void main(){

    int num = 0;
    int fun = 0;
    Monomio* vet;

    printf("Quantos monomios seu polinômio tem ?\n");
    scanf("%d",&num);

    vet = malloc(num * sizeof(Monomio));

    insere(num,vet);

    free(vet);

}