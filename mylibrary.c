#include <stdio.h>

int abc;

float average (int a, int b, int c){
    float avg;
    avg = (a+b+c)/3.0;
    a = 200;
    b = 3000;
    c = 1000;
    printf("The value of abc in average is %d\n", abc);
    return avg;
}

char * averageWMsg (int a, int b, int c, char s[]){
    float avg;
    avg = (a+b+c)/3.0;
    sprintf(s,"The average of %d, %d, and %d is %.2f\n", a, b, c, avg);
    return s;
}

float averageArray (int a[], int size){
    float avg = 0.0;
    for (int i=0; i<size ; i++){
        avg = avg + a[i];
        // avg += a[i];
    }
    avg = avg / size;
    for (int i=0; i<size ; i++){
        a[i] *= 2;
    }    
    return avg;
}
void extendLifetime() {
    int lvar = 0;
    static int svar = 0;
    lvar++;
    svar++;
    printf("The value of lvar is %d\n", lvar);
    printf("The value of svar is %d\n", svar);
}
