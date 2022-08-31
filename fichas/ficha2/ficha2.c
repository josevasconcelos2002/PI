#include <stdio.h>


float multInt1 (int n, float m){
    int r = 0;
    int i;
    for(i=1;i!=n;i++){
        r += i*m;
    }
    return r;
}



int main(){
   // int n;
   // float m;
    multInt1(n,m);
}