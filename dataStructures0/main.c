#include <string.h>

void main(){

int proceed;
proceed = 0;
char member1974_password[10] = {'1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' , '\0'};
char member1974_username[10] = {'c' , 'r' , 'a' , 'z' , 'y' , 'b' , 'o' , 'y' , '1' , '\0'};




puts(member1974_password );
puts(member1974_username );



char given_username[20];
char given_password[20];

puts(member1974_password );

do{
    printf("Please enter an username :  ");
    puts(member1974_password );

    strcpy( given_username , gets(given_username)  );
    printf("Please enter an password :  ");
    strcpy( given_password , gets(given_password) );

    puts(member1974_password );

    proceed = 0;
    if (strcmp(given_username ,member1974_username) == 0 ){
        printf("I amn working 12733");
        puts(member1974_password );
        if (strcmp(given_password ,member1974_password ) == 0){

            proceed = 1;
            printf("I am working 121212");
            return 0;
        }
    }

printf("%d" , proceed);
}while((proceed == 0));

return 0;
}
