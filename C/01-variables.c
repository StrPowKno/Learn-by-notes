#include <stdio.h>
#include <stdbool.h>


int main(void) {
   // int = integers
   /* For printing integers in printf(), 
   we should say where we want it to be.
   we do that by writing %d meaning the format is decimal
   at where we want it.
   Then we add the variable.
   
   Example:
    int age = 14;
    printf("The age variable is %d years.", age)*/ 

    int user_age = 14;

    printf("The user is %d years old.\n", user_age);


    // float = floating point numbers
    // the format of float is %f
    // the amount of the zeros in floating point numbers are
    // 6 zeros after '.'
    // so `float gpa = 2.5;` = 2.500000
    // if you want to limit the amount of zeros after '.'
    // you should write `%.NUMf` and replace "NUM" with the amount of zeros
    // so `float gpa = 2.5; printf("gpa = %.1f", gpa)` would print "gpa = 2.5"
    
    // NOTE:
    // float has about 6-7 significant decimal digits of precision.
    // This is NOT "6-7 digits after the decimal point".
    // Values beyond that precision are rounded. 
    
    /*
    Example:
    
    float gpa = 2.5;
    printf("Your gpa is %f \n", gpa)

    */

    float gpa = 4.5;

    printf("Your gpa is %f\n", gpa);


    // double = long floating point number
    // the format specifier of double is %lf 
    // // double has about 15-16 significant decimal digits of precision.
    // if you want to print a double value, you have to specify the amount of digits shown,
    // if else, it will print 6 digits after decimal as default.
    // so %lf = 0.000000
    // and %.15lf = 0.000000000000000


    double pi = 3.14159265358979;

    printf("the value of pi is %.15lf\n", pi);


    // char = character
    // the format specifier of char is %c
    // When working with chars, you need to use single quotes "'"


    char grade = 'A';

    printf("Your grade is %c\n", grade);



    // Strings
    // In C, a string is an array of characters ending with '\0'.
    
    // Think of it as stacked chars in memory

    // when you want to write strings, you do this
    // char string[] = "value"
    // Format specifire of string, is %s
    
    // NOTE: strings have to be in double quotes (")


    char text[] = "hello world";

    printf("the text is '%s' \n", text);


    // bool = boolean
    /// bool can only store true or false.
    // Internally these are represented as 1 and 0.
    // so `bool is_online = true` = `is_online = 1`

    // also because bools only save true/false (1 or 0)
    // the format specifier is also %d for decimal

    // On most systems, bool occupies 1 byte while int occupies 4 bytes,
    // but readability is the main reason to use bool.

    // C originally had no bool type.
    // Before C99, programmers used int (0 = false, non-zero = true).
    // <stdbool.h> provides the bool, true, and false names.


    bool is_online = true;


    if(is_online){  // For learning more on if statements, check if-statements.c
     
        printf("You are ONLINE");
    
    }
    else{
        printf("You are OFFLINE");
    }
    




    return 0;

    /*
    
    DATA TYPES

    int      = whole numbers                (typically 4 bytes)
    float    = single-precision decimal     (typically 4 bytes)
    double   = double-precision decimal     (typically 8 bytes)
    char     = single character             (1 byte)
    char[]   = string (array of chars)      (size varies)
    bool     = true or false                (typically 1 byte)

    */
}