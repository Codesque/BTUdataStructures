#include <stdio.h> 
#include <stdlib.h> 




int main(){

    int a ; 
    int *p; 
    int **q; 

    a = 58 ; 
    p = &a; 
    q = &p; 

    printf("\n\n%d\n\n" , a); 
    printf("\n\n%d\n\n" , *p ); 
    printf("\n\n%d\n\n" , **q); 

    return 0;
}