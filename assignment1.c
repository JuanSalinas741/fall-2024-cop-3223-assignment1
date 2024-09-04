//********************************************************
// lab1.c
// Author: Juan Carlos Salinas Recio
// Class: COP 3223, Professor Parra
// Purpose: This program prints specific outputs to the
// command line inputted from the user. The main purpose of this assignment is to write a complete C program that interacts with the user via the terminal.
// //********************************************************


// Header file for input output functions
#include <stdio.h>

 
// main function - where we will print the message
int main()
{
int age;
float height;
char grade;
    //Input from the user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    // Output from user
    printf("You entered - Age: %d, Height: %.1f, Grade: %c\n", age, height, grade);

    return 0;
    
}