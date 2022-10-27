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

    float age[] = {26.0 , 4.002 , 55.2 , 22.3 , 6.3,3.3,40.3,5.0,18.1}; 
    const int len = sizeof(age)/sizeof(float);
    //float newage[len];
    float avp = 0; 
    avp = avg(age);
    printf("%0.2f" , avp);
}