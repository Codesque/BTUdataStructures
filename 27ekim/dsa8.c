#include <stdio.h> 
#include <stdlib.h> 

typedef struct node {
    void* dataPtr; 
    struct node* link; 
}NODE; 

NODE* createNode(void* itemPtr){
    NODE* nodePtr; 
    nodePtr = (NODE*) malloc(sizeof(NODE)); 
    nodePtr->dataPtr = itemPtr; 
    nodePtr->link = NULL; 

    return nodePtr;

}



int main(){
    int * newData; 
    int *nodeData; 

    NODE* node; 
    newData = (int *) malloc(sizeof(int)); 

    *newData = 7 ; 
    node = createNode(newData); 
    nodeData = (int *) node ->dataPtr; 

    printf("Data from node : %d\n" 
            "Data from node : %x\n" 
            "Data from node : %d\n", 
            *nodeData , &nodeData , nodeData 
    );


    return 0;
}