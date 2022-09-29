#include <stdio.h>

typedef struct banda{
        char nome[20];
        char tipo[15];
        int n_elementos;
        int ranking;
} Banda;

int preenche(){
    //int i;
    Banda a;
    printf("Introduza o nome da banda a\n");
    scanf("%s", a.nome);
    printf("%s\n",a.nome);
}
int main(){
    preenche();
}