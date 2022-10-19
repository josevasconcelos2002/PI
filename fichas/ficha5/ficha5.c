#include <stdio.h>
#include <math.h>

typedef struct  aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

Aluno t[4] = {{4444, "André", {2,1,0,2,2,2}, 10.5}
             ,{2222, "Joana", {2,2,2,1,0,0}, 14.5}
             ,{7777, "Maria", {2,2,2,2,2,1}, 18.5}
             ,{3333, "Paulo", {0,0,2,2,2,1}, 8.7}
            };
Aluno v[4] = {{2222, "Joana", {2,2,2,1,0,0}, 14.5}
             ,{3333, "Paulo", {0,0,2,2,2,1}, 8.7}
             ,{4444, "André", {2,1,0,2,2,2}, 10.5}
             ,{7777, "Maria", {2,2,2,2,2,1}, 18.5}
            };

/*
float nota(){
    Aluno a;
    int i;
    double mini,nota,media1,media2;
    printf("Introduza o número do aluno\n");
    scanf("%d",&a.numero);
    printf("Introduza o nome do aluno\n");
    scanf("%s",a.nome);
    printf("Introduza as notas dos Mini-testes\n");
    for(i=0;i<6;i++){
        scanf("%d",&a.miniT[i]);
        if(a.miniT[i]<0 || a.miniT[i]>2){
            printf("Erro! Introduza de novo a sua nota\n");
            scanf("%d",&a.miniT[i]);
        }
    }
    for(i=0;i<6;i++){
        mini += a.miniT[i]; 
    }
    media1 = (mini/6 + fmod(mini,6.0));
    printf("Media1 = %f\n",media1);
    media2 = ((media1*5)/2) + fmod((media1*5),2);
    printf("Media2 = %f\n",media2);
    printf("Introduza a nota do teste\n");
    scanf("%f",&a.teste);
    nota = 0.75*a.teste + media2;
    printf("A nota final do aluno %s é: %f\n",a.nome,nota);
    return nota;
}
*/

int procuraNum(int num,Aluno v[],int N){
    int i;
    for(i=0;i<N;i++){
        if(v[i].numero == num) printf("%d\n",i);
    }
    if (v[0].numero!=num && v[1].numero!=num && v[2].numero!=num  && v[3].numero!=num) printf("-1\n");
    /*    if (for(i=0;i<N;i++){ 
                        v[i].numero != num
                        }) printf("-1\n");
 
    */
}




int main(){
     procuraNum(2222,v,4);
     procuraNum(7775,v,4);
}