#include <stdio.h>
#include <stdbool.h>
void main () {
    float exam;
    char letterGrade;
    bool pass = false;

    printf("How much did you do in exam?");
    scanf("%f", &exam);
    if (exam >= 90.0) {
        letterGrade = 'A';
        pass = true;
    } 
    else if (exam >= 80.0) {
        letterGrade = 'B';
        pass = true;
    }
    else if (exam >= 70.0) {
        letterGrade = 'C';
        pass = true;
    }
    else {
        letterGrade = 'F';        
    }
    printf("Your grade is %c\n",letterGrade);
    switch (letterGrade)
    {
    case 'A':
        printf("Very Good!\n");
        break;

    case 'B':
        printf("Good!\n");
        break;

    case 'C':
        printf("Good attemp!\n");
        break;
    
    default:
        printf("Better luck next time!\n");
        break;
    }
    if (pass) {
        printf("You passed the course!\n");
    }
}