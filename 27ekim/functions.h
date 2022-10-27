int toplama(int x , int y ){
int output = (x+y); 
return output;
} 

int us_alma(int x , int y ){

    int output = 1; 

    for (int i = 0 ; i < y ; i++){
        output *= x;
    } 
    return output; 

} 

int carpma(int x , int y){return (x*y);}