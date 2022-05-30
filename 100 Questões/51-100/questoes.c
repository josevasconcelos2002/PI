#include "questoes.h"
#include <stddef.h>

//37

int iguaisAB (ABin a, ABin b) {

    if( a == NULL && b != NULL) return 0;
    else if(a != NULL && b == NULL) return 0;
        else if( a == NULL && b == NULL) return 0;
    return ((a->valor == b->valor) && iguaisAB(a->esq, b->esq) && iguaisAB(a->dir, b->dir));

}