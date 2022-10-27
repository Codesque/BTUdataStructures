#include <stdio.h> 
#include <stdlib.h> 

typedef struct node {
int veri ; 
struct dugum* link; 
}dugum ;


int main(){

    struct node* bir; 

    bir = (struct dugum*) malloc(sizeof(struct node)) ; 

    struct node* iki; 

    iki = (struct dugum*) malloc(sizeof(struct node)); 

    struct node* uc;  

    uc = (struct dugum* ) malloc(sizeof(struct node)); 

    
    bir->veri = 1  ;
    bir->link = iki; 
    iki->veri = 2 ; 
    iki->link = uc; 
    uc->veri = 3; 
    uc->link = NULL; 

    printf("%d->%d->%d->NULL" , bir->veri , *(bir->link) ,  );




    return 0;
}