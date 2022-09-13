#include <stdio.h>


float multInt1 (int n, float m){
    int r = 0;
    int i;
    for(i=1;i!=n;i++){
        r += i*m;
    }
    printf("r = %d\n",r);
    return r;
}



int main(){
  int n;
  float m;
  printf("Introduza a variável n e m\n");
  scanf("%d %f",&n,&m);
  multInt1(n,m);
}