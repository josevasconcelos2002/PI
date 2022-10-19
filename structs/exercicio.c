#include <stdio.h>

typedef struct banda{
        char nome[20];
        char tipo[15];
        int n_elementos;
        int ranking;
} Banda;

int tabela(Banda a,Banda b,Banda c){
    if (a.ranking>b.ranking && b.ranking>c.ranking){
    printf("---------------------------------------------\n");
    printf("|               Bandas                      |\n");
    printf("---------------------------------------------\n");
    printf("| Ranking |  Nome   |  Tipo   | N_elementos |\n");
    printf("---------------------------------------------\n");
    printf("|  %d     |  %s     |   %s    | %d          |\n",a.ranking,a.nome,a.tipo,a.n_elementos);
    printf("---------------------------------------------\n");
    printf("|  %d     |  %s     |   %s    | %d          |\n",b.ranking,b.nome,b.tipo,b.n_elementos);
    printf("---------------------------------------------\n");
    printf("|  %d     |  %s     |   %s    | %d          |\n",c.ranking,c.nome,c.tipo,c.n_elementos);
    printf("---------------------------------------------\n");
    }
    else if (b.ranking>a.ranking && a.ranking>c.ranking){
            printf("---------------------------------------------\n");
            printf("|               Bandas                      |\n");
            printf("---------------------------------------------\n");
            printf("| Ranking |  Nome   |  Tipo   | N_elementos |\n");
            printf("---------------------------------------------\n");
            printf("|  %d     |  %s     |   %s    | %d          |\n",b.ranking,b.nome,b.tipo,b.n_elementos);
            printf("---------------------------------------------\n");
            printf("|  %d     |  %s     |   %s    | %d          |\n",a.ranking,a.nome,a.tipo,a.n_elementos);
            printf("---------------------------------------------\n");
            printf("|  %d     |  %s     |   %s    | %d          |\n",c.ranking,c.nome,c.tipo,c.n_elementos);
            printf("---------------------------------------------\n");
            } 
    return 0;
}
int preenche(){
    //int i;
    Banda a,b,c;
    printf("Introduza o nome da banda A\n");
    scanf("%s", a.nome);
    printf("Introduza o tipo dessa banda \n");
    scanf("%s", a.tipo);
    printf("Introduza o número de elementos\n");
    scanf("%d", &a.n_elementos);
    printf("Qual o ranking da banda? \n");
    scanf("%d", &a.ranking);
    printf("Introduza o nome da banda B\n");
    scanf("%s", b.nome);
    printf("Introduza o tipo dessa banda \n");
    scanf("%s", b.tipo);
    printf("Introduza o número de elementos\n");
    scanf("%d", &b.n_elementos);
    printf("Qual o ranking da banda? \n");
    scanf("%d", &b.ranking);
    printf("Introduza o nome da banda C\n");
    scanf("%s", c.nome);
    printf("Introduza o tipo dessa banda \n");
    scanf("%s", c.tipo);
    printf("Introduza o número de elementos\n");
    scanf("%d", &c.n_elementos);
    printf("Qual o ranking da banda? \n");
    scanf("%d", &c.ranking);
    tabela(a,b,c);
    return 0;
}
int main(){
    preenche();
}