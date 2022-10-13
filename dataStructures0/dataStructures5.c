int dataStructures5(){

    int num , num3;
    scanf("%d" , &num);

    while (num > 0){
        // num3 = num * num * num ;
        num3 = myPow(num , 3);
        printf("%d ^ 3 = %d \n" , num , num3);
        num--;
    }


return 0;}

int myPow(int base , int power , int total){
total = 1;
for (int i = 0 ; i < power ; i++){

    total *= base ;
}
return total ;
}
