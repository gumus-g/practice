#include <stdio.h>
#define SIZE 100

int main() {
    int myArray[]= {20,30,40,50,60};
    int myArray2[SIZE];
    int realSize = 0;

    for (int i=0;i<5;i++) {
        printf("myArray[%d]=%d\n",i,myArray[i]);
    }
    
    for (int i=0;i<5;i++) {
        myArray2[i] = myArray[i];
        realSize++;
    }
    myArray2[5]= 123;
    realSize++;

     for (int i=0;i<realSize;i++) {
        printf("After myArray2[%d]=%d\n",i,myArray2[i]);
    }       
    
    return 0;
}