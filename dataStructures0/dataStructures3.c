#include <stdio.h>
#include <stdlib.h>
int dataStructures3(){

    printf("");
    int operation;
    scanf("%d" , &operation);

    int num1 , num2 , consequance ;
    scanf("%d" , &num1);
    printf("");
    scanf("%d" , &num2);


    switch (operation) {

    case 1 :
            consequance = num1 + num2 ;
            printf("%d" , consequance);
            break;

    case 2 :
            consequance = num1 - num2 ;
            printf("%d" , consequance);
            break;

    case 3 :
            consequance = num1 * num2 ;
            printf("%d" , consequance);
            break;



    case 4 :
            consequance = (int) num1 / num2 ;
            printf("%d" , consequance);
            break;

    default :
        printf("ValueError : You entered wrong value for type of operation");


    }





}
