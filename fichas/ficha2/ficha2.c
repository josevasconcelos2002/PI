#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//1
float multInt1 (){
    int n;
    float m;
    printf("Introduza as variáveis n e m\n");
    scanf("%d %f",&n,&m);
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
float multInt2 (){
   int n;
   float m;
   printf("Introduza as variáveis n e m\n");
   scanf("%d %f",&n,&m);
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
   printf("eficiência: %d\n\n",e);
   return r;
}

//3
/*
int mdc1(){
  int a,b,i,n,d,D,M;
  d=0;
  D=0;
  printf("Introduza as variáveis a e b, respetivamente\n");
  scanf("%d %d",&a,&b);
  if(a<0 || b<0){
    printf("Volte a introduzir os valores de a e b\n");
    scanf("%d %d",&a,&b);
  }
  else if(a<=b){
    for(i=1;i<=a;i++){
      if(a%i == 0) d=i;
    }
    for(i=1;i<=b;i++){
      if(b%i == 0) D=i;
    }
    if(d==D) printf("O máximo divisor comum entre %d e %d é: %d\n",a,b,d);
    else for(i=1;i>=1;i++){
      
    }
  }
}
*/
int main(){
  int r=1;
  do{
    printf("\nOlá, seja bem-vindo(a) à ficha2 de PI. Escolha qual exercício deseja realizar.\n\n");
    printf("1. Produto de n por m\n");
    printf("2. Produto de n por m (mais eficiente)\n");
    printf("3. Máximo divisor comum entre a e b\n");
    printf("4. Máximo divisor comum entre a e b (Euclides)\n");
    printf("5. Máximo divisor comum entre a e b (Euclides)(%%)\n");
    printf("6. Sequência de Fibonacci\n");
    printf("7. Sequência de Fibonacci (mais eficiente)\n");
    printf("8. Sair :(\n");
    
    scanf("%d",&r);
    system("cls || clear");

    switch(r) {

      case 1:
        multInt1();
        break;

        case 2:
          multInt2();
          break;
        
        case 3:
          mdc1();
          break;
        /*
        case 4:
          mdc2();
          break;

        case 5:
          mdc2%();
          break;

        case 6:
          fib1();
          break;

        case 7:
          fib2();
          break;
        */
        case 8:
          printf("Já vais? :(\n\n");
          sleep(2);
          system("clear || cls");
          break;
        
        default:
          printf("Valor inválido\n");
    }
  } while(r!=8);
}