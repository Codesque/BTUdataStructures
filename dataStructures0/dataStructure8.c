#include <stdio.h>
int add(int a , int b){

    if (a == b){
        return 0;
    }
    else {
        return a + add(a+1 , b);
    }

}

int dataStructures(){

    printf("%d" , add(0 , 10));

}
