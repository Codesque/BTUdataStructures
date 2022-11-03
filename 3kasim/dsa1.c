#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>


#define MULT(a , b) ((a) * (b)) 
#define fmt "The time has taken from %f \n"

int factoriel_with_macro(int a){

    if (a == 1) return 1; 
    return MULT(a , factoriel_with_macro(a-1));
}

int factoriel(int b){

    if(b == 1) return 1; 
    return b * factoriel(b - 1);
}

double timeTaken(int func(int x) , int num ){  

    clock_t t;
    

    t = clock(); 
    func(num); 
    t = clock() - t; 

    double time_taken = (double) t / CLOCKS_PER_SEC; 

    return time_taken;
}

int main(){  
    int a , b ; 
    int num = 1000;
    a = factoriel_with_macro(num);  
    printf(fmt , timeTaken(factoriel_with_macro , num)); 
    printf( fmt , timeTaken(factoriel , num));     
}