#include <stdio.h>

int main(){

    // What are format specifiers?

    /*
    
    Format specifiers = Special tokens that begin with a % symbol,
                        followed by a charatcer that specifies the data type;
                        and optional modifiers (width, percision, flags).
                        They control how the data is displayed or interpreted
    
    
    */


    int age = 14;
    float price = 10.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "phoenix";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi); // Also if you write %f instead of %lf in printf for doubles, it doesnt matter. BUT for scanf it DOES matter
    printf("%c\n", currency);
    printf("%s\n",name);

    



    // Format specifiers:
    //
    // %d  -> int
    // %f  -> float
    // %lf -> double
    // %c  -> char
    // %s  -> string



}