#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main (int argc, char *argv[]){
    char s[100] = "";
    struct PatientData {
        char name[20];  //patients's first name
        int age;        //Patient's age in years
        float weight;   //Patient's name in pounds
        struct PatientData *next;  //link to next Patient
    };
    typedef struct PatientData Patient;
    Patient *head = (Patient *) calloc(1, sizeof(*head));
    Patient *pa;
    Patient *pb;

    strcpy(head->name, "Person 1");
    head->age = 35;
    head->weight = 150;
    head->next = NULL;

    pa = head;
    for (int i=0; i<3; i++) {
        pb = (Patient *) calloc(1, sizeof(*pb));
        sprintf(s, "Person %d", i+2);
        strcpy(pb->name, s);
        pb->age = 10*i + 15;
        pb->weight = 180 - 20*i;
        pa->next = pb;
        pb->next = NULL;
        pa = pb;
    }

    //Patient tim = {"Tim", 35, 150.0};
    //Patient class[3];
    //Patient *p;
    //Patient *pa;

    
    for (pa = head; pa !=NULL; pa=pa->next) { 
        printf("Name:%s age:%d weight:%.2f\n", pa->name, pa->age, pa->weight);
    }

    return 0;

    //printf("Name:%s age:%d weight:%.2f\n", tim.name, tim.age, tim.weight);

    //strcpy(tim.name, "Timoty");
    //tim.age = 36;
    //tim.weight = 180.0;
    //printf("Name:%s age:%d weight:%.2f\n", tim.name, tim.age, tim.weight);
    //printf("\n");

    //strcpy(class[0].name, "John");
    //strcpy(class[1].name, "Jill");
    //strcpy(class[2].name, "Jack");

    //for (int i=0; i<3; i++) {
    //    class[i].age = 10*i +10;
    //    class[i].weight = 180 - 10*i;
    //
    //}
    //for (int i=0; i<3; i++) {
    //    printf("Name:%s age:%d weight:%.2f\n", class[i].name, class[i].age, class[i].weight);
    //}

    //p = (Patient *)calloc(3, sizeof(*p));

    //pa = p;
    //strcpy(pa->name, "Mary");
    //strcpy((pa+1)->name, "Mark");
    //strcpy((pa+2)->name, "Maya");

    //for (int i=0; i<3; i++) {
    //    (pa+i)->age = 10*i +15;
    //    (pa+i)->weight = 180 - 20*i;
    //}

    //for (int i=0; i<3; i++) {
    //    printf("Name:%s age:%d weight:%.2f\n", (pa+i)->name, (pa+i)->age, (pa+i)->weight);
    //}

    //pa = p
    //for (int i=0; i<3; i++) {
    //    printf("Name:%s age:%d weight:%.2f\n", pa->name, pa->age, pa->weight);
    //    pa++
    //}
    //free(p);
    //return 0;
}