#include <stdlib.h> 
#include <stdio.h>

struct node {
    struct node* next; 
    int data; 
}  *head;

void initialise(){
    head = NULL;
}

void insert(int num){

    // allocate memory for userDefined Node Datatype
    struct node* newNode = (struct node*) malloc(sizeof(struct node)); 
    
    // for the new Node , initialise the intended key value
    newNode->data = num; 
    
    // newNode should be at the starting of the list. Because of that tha address that the newNode shows should be NULL; head was NULL;
    newNode->next = head; 

    
    head = newNode; 
    printf("Inserted Element : %d\n" , num);
}






void reverse(struct node* nodePtr){

    if (nodePtr == NULL)return; 

    if(nodePtr->next == NULL){
        head = nodePtr;
        return;
    }   

    reverse(nodePtr->next); 

    struct node* q = nodePtr->next; 
    q->next = nodePtr; 
    nodePtr->next = NULL; 
}



void printLinkedList(struct node* nodePtr){

    while(nodePtr != NULL){
        printf("%d" , nodePtr->data ); 
        nodePtr = nodePtr->next;
        if(nodePtr != NULL){
            printf("-->");
        }
    }

}

int main(){ 

    initialise(); 
    for(int i = 0 ; i < 4 ; i++) insert(i+1);  

    printLinkedList(head); 
    reverse(head);  
    printf("\nReversed linekd list: \n"); 
    printLinkedList(head); 
    return 0;



} 