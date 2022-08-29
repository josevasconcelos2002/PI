#include <stdio.h>
#include <ctype.h>

// exercicio 1

void alinea_1_1(){
    int x,y;
    x = 3;
    y = x+1;
    x = x*y;
    y = x+y;
    printf("%d %d",x,y);
    printf("\n\n");
}

void alinea_1_2(){
    int x, y;
    x = 0;
    y = 1;
    printf ("%d %d", x, y);
    printf("\n\n");
}

void alinea_1_4(){
    int x, y;
    x = 200; y = 100;
    x = x+y; y = x-y; x = x-y;
    printf ("%d %d", x, y);
    printf("\n\n");
}

// exercicio 2

void alinea_2_1(){
    int x, y;
    x = 3; y = 5;
    if (x > y)
    y = 6;
    printf ("%d %d", x, y);
    printf("\n\n");
}

void alinea_2_2(){
    int x, y;
    x = y = 0;
    while (x != 11) {
        x = x+1; y += x;
    }
    printf ("%d %d", x, y);
    printf("\n\n");
}

void alinea_2_3(){
    int i;
    for (i=0; (i<20) ; i++)
    if (i%2 == 0) putchar ('_');
    else putchar ('#');
    printf("\n\n");
}


//exercicio 3

void alinea_3_1(){
    int x,y;
    for(y=0; (y<5); y++){
        for(x=0; x<5 ; x++){
            putchar('#');
        }
        printf("\n");
        x=0;
    }
    printf("\n\n");
}

void alinea_3_2(){
    int x,y;
    for(y=0; (y<5); y++){
        for(x=0; x<5 ; x++){
           if(y%2 == 0 && x%2 == 0) putchar('#');
           
        }
        printf("\n");
        x=0;
    }
    printf("\n\n");
}



int main(){
   alinea_1_1();
   alinea_1_2();
   alinea_1_4();
   alinea_2_1();
   alinea_2_2();
   alinea_2_3();
   alinea_3_1();
}