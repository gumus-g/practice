#include <stdio.h>
#include <string.h>
int main (int argc, char *argv[]){
    struct PatientData {
        char name[20];  //patients's first name
        int age;        //Patient's age in years
        float weight;   //Patient's name in pounds
    };
    typedef struct PatientData Patient;

    Patient tim = {"Tim", 35, 150.0};
    printf("Name:%s age:%d weight:%.2f\n", tim.name, tim.age, tim.weight);

    strcpy(tim.name, "Timoty");
    tim.age = 36;
    tim.weight = 180.0;
    printf("Name:%s age:%d weight:%.2f\n", tim.name, tim.age, tim.weight);
}