#include <stdio.h>

// exercicio 1

void alinea_1(){
    int x,y;
    x = 3;
    y = x+1;
    x = x*y;
    y = x+y;
    printf("%d %d",x,y);
    printf("\n");
}

void alinea_2(){
    int x, y;
    x = 0;
    printf ("%d %d\n", x, y);
    printf("\n");
}

void alinea_3(){
    int x, y;
    x = 0;
    printf ("%d %d\n", x, y);
    printf("\n");
}


int main(){
   alinea_1();
   alinea_2();
   alinea_3();
}