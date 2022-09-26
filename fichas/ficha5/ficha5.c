#include <stdio.h>

typedef struct  aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

int nota(){
    Aluno a;
    printf("Introduza o número do aluno\n");
    scanf("%d",&numero);
    printf("Introduza o nome do aluno\n");
    scanf("%c",&nome);
    printf("Introduza as notas dos Mini-testes\n");
    scanf("%d")

}
int main(){
     nota();
}