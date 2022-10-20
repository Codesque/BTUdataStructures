#include <stdio.h>

int main(){

    char dizi1[] = {'A','D','E','M','\0'};
    char dizi2[] = "YUKSEL";
    printf("Adým : %s\n"
            "Soyadým : %s\n"
            "Ad ilk 3 harf : %c%c%c\n"
            "Soyad ilk 3 harf %c%c%c\n"
            "Ad uzunlugu : %d\n",
            dizi1 , dizi2 , dizi1[0] , dizi1[1] , dizi1[2] ,  dizi2[0] , dizi2[1] , dizi2[2] , sizeof(dizi1)/sizeof(char)
    );


}


