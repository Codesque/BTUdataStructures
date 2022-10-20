#include <stdio.h>

int asjhgdsajhgas(){
int a = 0 ;
int total = 0 ;
int input;
while(a < 5){
    scanf("%d" , &input );
    a++;
    if (input < 0){
        continue;
    }
    total += input;

}
printf("Consequance is : %d" , total);
}
