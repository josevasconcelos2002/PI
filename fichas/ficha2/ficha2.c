#include <stdio.h>
#include <stdlib.h>

//1
float multInt1 (int n, float m){
    float r = 0;
    int i,e;
    for(i=1;i<=n;i++){
        // printf("r = %f\n",r);
        r += m;
        e = i;
    }
    printf("\nr = %f\n",r);
    printf("eficiência: %d\n\n",e);
    return r;
}

//2
float multInt2 (int n, float m){
   float r = 0;
   int e = 0;
   while(n >= 1){
    if(n%2 != 0){
      r += m;
      e++;
      // printf("r = %f\n",r);
    }
    n = n/2;
    // printf("n = %d\n",n);
    m = m*2;
    // printf("m = %f\n",m);
   }
   printf("r = %f\n",r);
   printf("eficiência: %d\n",e);
   return r;
}

//3
// int mdc1(int a, int b){

// }
int main(){
  int r;
    printf("\nOlá, seja bem-vindo(a) à ficha2 de PI. Escolha qual exercício deseja realizar.\n");
    printf("1. Produto de n por m\n");
    printf("2. Produto de n por m (mais eficiente)\n");
    printf("3. Máximo divisor comum entre a e b\n");
    printf("4. Máximo divisor comum entre a e b (Euclides)\n");
    printf("5. Máximo divisor comum entre a e b (Euclides)(%%)\n");
    printf("6. Sequência de Fibonacci\n");
    printf("7. Sair :(\n");

    scanf("%d",&r);
    system("clear");
    if(r==1){
        int n;
        float m;
        printf("\nIntroduza as variáveis n e m\n");
        scanf("%d %f",&n,&m);
        multInt1(n,m);
    }
    else if(r==2){
        int n;
        float m;
        printf("\nIntroduza as variáveis n e m\n");
        scanf("%d %f",&n,&m);
        multInt2(n,m);
        }
       /*
       else if(r==3){
              int a,b;
              printf("\nIntroduza as variáveis a e b\n");
              scanf("%d %d",&a,&b);
              mdc1(a,b);
            }
            else if(r==4){
                  int a,b;
                  printf("\nIntroduza as variáveis a e b\n");
                  scanf("%d %d",&a,&b);
                  mdc1(a,b);
                 }
                 else if(r==5){
                        int a,b;
                        printf("\nIntroduza as variáveis a e b\n");
                        scanf("%d %d",&a,&b);
                        mdc1(a,b);
                      }
                      else if(r==6){
                              int a,b;
                              printf("\nIntroduza as variáveis a e b\n");
                              scanf("%d %d",&a,&b);
                              mdc1(a,b);
                           }
                           */
                           else if(r==7){
                                  system("exit");
                                }
       
 return 1;
}