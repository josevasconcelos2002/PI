#include <stdio.h>
#include <time.h>

int contaVogais (char *s) {
    int i = 0;
    int ac = 0;
    while(s[i]!= '\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            ac += 1;
        }
        else ac+=0;
        i++;
    }
    return ac;
}
/*
int retiraVogaisRep (char *s){
    char *aux;
    int i = 0;
    int j = 0;
    while(s[i] != '\0'){
        for(i; ;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
            
        }
    }
}
*/
int ordenado (int v[], int N){
    int i,a;
    for(i=0;i<N;i++){
        if(v[i]>=v[i++]){
            a = v[i];
            v[i] = v[i++];
            v[i++] = a;
        }
    }
    for(i=0;i<N;i++){
        printf("%d",v[i]);
    }
    return 1;
}
int main(){  

    char s1[100] = "Estaa e umaa string coom duuuplicadoos";
    int a1 [10] = {3,2,4,1,5,6,4,3,2,1};
    //int x;
    
    printf ("Testes\n");
    //sleep(100);
    printf("Funções sobre Strings : Exercício 1:\n");
    //sleep(100);
    printf ("A string \"%s\" tem %d vogais\n", s1, contaVogais (s1));
    //sleep(100);
    printf("Arrays ordenados : Exercício 1:\n");
    //sleep(50);
    printf("O array, já ordenado é: %d",ordenado(a1,10));
    

    //printf()
    //x = retiraVogaisRep (s1);
    //printf ("Foram retiradas %d vogais, resultando em \"%s\"\n", x, s1);
    
    //x = duplicaVogais (s1);
    //printf ("Foram acrescentadas %d vogais, resultando em \"%s\"\n", x, s1);
    
    printf ("\nFim dos testes\n");

    return 0;
}