#include <stdio.h>

int main(){
    int idade, matrícula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matrícula);

    printf("Nome do Aluno: %s - Matrícula: %d \n", nome, matrícula);
    printf("Idade: %d \n", idade);
    printf("Altura: %f \n", altura);
    
    return 0;
    
}