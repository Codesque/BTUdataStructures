#include <stdio.h> 
#include <stdlib.h> 






int main(){

    void *ptr; 
    int i = 7; 
    float f= 23.5f;  

    ptr = &i; 
    printf("\n\n%d\n\n" , *((int*) ptr)); 

    ptr = &f; 
    printf("\n\n%lf\n\n", *((float*) ptr));
    
    return 0;
}