#include <stdio.h>
#include <stdlib.h>
int dataStructures4(){

    int factorielnum , consequance;
    scanf("%d" , &factorielnum);
    consequance = factoriel(factorielnum);
    printf("%d" , consequance );

return 0;
}

int factoriel(int num){

    if (num == 1) {
        return 1 ;
    }

    else
        {return num * factoriel(num - 1);
}

}

