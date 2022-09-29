#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maior_elemento(){
    int v[100],i,x;
    for(i=0; ;i++){
        while(v[i]!=0){
            
        }
    }

}

int main(){
  int r=1;
  do{
    printf("\nOlá, seja bem-vindo(a) à 1ª parte das questões de PI. Escolha qual exercício deseja realizar.\n\n");
    sleep(1);
    printf("1. Maior elemento da sequência\n");
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
        maior_elemento();
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
        case 51:
          printf("Já vais? :(\n\n");
          sleep(2);
          system("clear || cls");
          break;
        
        default:
          printf("Valor inválido\n");
    }
  } while(r!=51);
}