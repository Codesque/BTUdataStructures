#include <stdio.h>

int pow(int num , int power){
int total = 1;
for (int i = 0; i < power ; i++){
    total = total * num;
}
return total;
}

int dataStructures2(){

    printf("%d" , pow(10 , 2));

}
