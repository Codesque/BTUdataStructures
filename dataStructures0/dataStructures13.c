#include <stdio.h> 

int main(){
    
    char dizi1[10] = {'A','D','E','M','\0'};
    char dizi2[] = "YUKSEL"; 
    printf("Adım : %s\n" 
            "Soyadım : %s\n"
            "Ad ilk 3 harf : %c%c%c\n" 
            "Soyad ilk 3 harf %c%c%c\n"
            "Ad uzunlugu : %ls\n",
            dizi1 , dizi2 , dizi1[0] , dizi1[1] , dizi1[2] ,  dizi2[0] , dizi2[1] , dizi2[2] , sizeof(dizi1)/sizeof(char)
    );
}