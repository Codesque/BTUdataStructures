#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


typedef struct {

    char cdizi1[20]; 
    char cdizi2[20]; 
    int id; 

}BTU_BM_2;



int main(){

    BTU_BM_2    yd1 , yd2; 

    strcpy(yd1.cdizi1 , "C"); 
    strcpy(yd1.cdizi2 , "Programlama"); 
    yd1.id = 21; 

    strcpy(yd2.cdizi1 , "Bilgisayar"); 
    strcpy(yd2.cdizi2 , "Programlama");  

    yd2.id = 34; 

    printf("%s %s %d\n\n" , yd1.cdizi1 , yd1.cdizi2 , yd1.id ); 
    printf("%s %s %d\n\n" , yd2.cdizi1 , yd2.cdizi2 , yd2.id );



    return 0;
}