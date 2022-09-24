#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swapM(){
    int x,y,i;
    printf("Introduza o valor de x e de y\n");
    scanf("%d %d",&x,&y);
    printf("x=%d;\n",x);
    printf("y=%d;\n",y); 
    i = x;
    x = y;
    y = i;
    printf("\nApós a troca:\n x=%d;\n y=%d;\n\n",x,y);
}

int main(){
  int r=2;
  do{
    printf("\nOlá, seja bem-vindo(a) à ficha3 de PI. Escolha qual exercício deseja realizar.\n\n");
    printf("2. Troca do valor de 2 variáveis\n");
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

      case 2:
        swapM();
        break;
        /*
        case 2:
          multInt2();
          break;
        
        case 3:
          mdc1();
          break;
        
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