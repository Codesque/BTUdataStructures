#include <stdio.h> 
#include <stdlib.h> 


void changeValue(int a , int b){ 

    int temp = a; 
    a = b ; 
    b = temp; 
    printf("deger atama ile a:%d , ye b:%d \n" , a , b); 
}

void change_valueofptr(int *a , int *b){

    int temp = *a ; 
    *a = *b; 
    *b = temp; 
    printf("Pointer yazdir : a : %d , b: %d" , *a , *b) ;

}


int main(){
    int x = 10 ; 
    int y = 5; 
    changeValue( x , y); 
    change_valueofptr(&x , &y);


    return 0;
}