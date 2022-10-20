#include <stdio.h> 

float avg(float ages[]){ 
    float total = 0.0;
    int len = sizeof(ages)/sizeof(ages[0]);
    //printf("%d" , len); 
    int temp = len;
    while (temp > 0){
        temp--; 
        total += ages[temp]; 
    }
    return (total/len);
}

int main(){

    float age[] = {23 , 4.002 , 55.2 , 22 , 6,3,40,5,18}; 
    int len = sizeof(age)/sizeof(float);
    float newage[len] = age;
    float avp = 0; 
    avp = avg(age);
    printf("%0.2f" , avp);
}