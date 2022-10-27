#include <stdio.h> 
#include <stdlib.h> 

int def(){
    typedef struct x{
        int x ; 
        //int y = 10; ERROR
        int y;
    }x;

    x obj;  

    obj.x = 10;
    printf("%d" , obj.x); 

    struct  x *ptr ; 

    ptr = (struct x * ) malloc(sizeof(struct x)); 

    ptr->x = 234; 
    ptr->y = 987; 
    printf("\nx = %d , y = %d" , ptr->x , ptr->y);  
    printf("\nx = %d , y = %d" , (*ptr).x , (*ptr).y); 


    free(ptr);
    

}


int main(){ 

    
def();

    return 0;
}