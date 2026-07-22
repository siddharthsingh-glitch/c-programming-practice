#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    string Name = get_string("What is your name? ");
    printf("(Name: %s)\n", Name);

    int Age = get_int("What is your age? ");
    if(Age >= 18){
        printf("(Age: %i)\n", Age);
    } 
    else{
        printf("You are not eligible for Driving License");
    }
    
    long Phone_Number = get_long("Write your phone number ");
    printf("(Phone Number: %li)\n", Phone_Number);

    char Pan_Number = get_char("Write your Pan card number ");
    printf("(Pan Number: %c)\n", Pan_Number);

    long Account_Number = get_long("Write your Account Number ");
    printf("(Account Number: %li)\n", Account_Number);
}