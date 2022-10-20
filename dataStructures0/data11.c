#include <stdio.h>

int dsa(){

typedef int input;
int i = 0 , total = 0;
input x;
while(i < 10){
    scanf("%d" , &x);
    if (x < 0){
        break;
    }
    total += x;
}


printf("Consequance is : %d" ,total );

}
