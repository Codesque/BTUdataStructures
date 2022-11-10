#include <stdlib.h> 
#include <stdio.h>

struct node{
    struct node* next; 
    int data; 


}*start; 

void initialise(){
    start = NULL;
}


void basaEkle(int basa){

struct node* basaGelen = (struct node*) malloc(sizeof(struct node));
basaGelen->data = basa; 
basaGelen->next = start; 
start = basaGelen;
}

void printLinkedList(struct node* root){
    while(root != NULL){
        printf("%d" ,root->data ); 
        root = root->next; 
        if (root != NULL){
            printf("----->");
        } 
    } 


}


/*
node = 5----->4----->3----->2----->1 / x = 3 / y = 404
copynode = 5----->4----->3----->2----->1
while : 
    5---->next----->data = 3 != 4 
        copynode (5----->4----->3----->2----->1) = copynode (4----->3----->2----->1) 

    4----->next----->data = 3 == 3 // BREAK 

onune = copynode-> next = [(4----->3----->2----->1)->next] ---> [3----->2----->1] 
copynode->next :  [3----->2----->1]  = arayaEklenecek ::::::::: copynode->next = NULL; 
arayaEklenecek-----> next = onune : [arayaEklenecek : NULL] ----->next  = [3----->2----->1] 

arayaEklenecek ------> [3----->2----->1] :::::: [arayaEklenecek------->3----->2----->1]





        


*/
void arayaEkle(int x , int y){
    struct node* arayaEklenecek = (struct node*) malloc(sizeof(struct node)); 
    struct node* q = start; 
    while(q->next->data != x){  // onune gelecek olan deger x'e esit olana kadar q'nun indisini 1 arttir
        q = q->next; 
    } 
    struct node* onune = (struct node*) malloc(sizeof(struct node));  
    onune = q->next;
    q->next = arayaEklenecek ; 
    arayaEklenecek -> next = onune; 

}



int main(){ 

    initialise(); 
    for(int i = 0 ; i < 5 ; i++) basaEkle(i+1); 
    printLinkedList(start);


} 