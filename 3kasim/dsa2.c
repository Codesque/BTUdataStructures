#include <stdio.h> 
#include <stdlib.h> 



int myMax( int *ptrNums , int len){ 


    int maks = *ptrNums ; 
    int i; 

    for(i = 1 ; i < len ; i++){
        
        if (*(ptrNums + i) > maks) {
            maks = *(ptrNums + i); 
        }


    } 
    return maks;

}


int main(){ 

    int sayilar[5] = {1,2,50,25,33}; 
    int maks = myMax(sayilar , 5); 
    printf("Sayilar dizisinin en buyuk elemani : %d" , maks);
    
}