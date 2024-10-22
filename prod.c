#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

int* createArray(int n);
void printArray(int *p, int n);
int prodArray(int *p, int n);

int main (int argc, char *argv[]) {
    int *myArray;
    int n;
    int prod;
    char msg[200];
    int *p = NULL;

    sprintf(msg, "how many elements in the array (1-%d)? ", SIZE);
    printf("%s", msg);
    scanf("%d",&n);
    if ((n<=0) || (n>SIZE)) {
        printf ("Number of elements (%d) is invalid.\n",n);
        return 1;
    }
    myArray = createArray(n);
    if (myArray != NULL) {
        printArray(myArray, n);
        prod = prodArray(myArray, n);
        printf("The product of all elements of myArray is %d\n",prod);
        free(myArray);
        return 0;        
    }   
    printf("Error allocating memory. \n");
    return 1;
}
int* createArray(int n) {
    int *a = (int *) malloc(sizeof(*a)*n);
        if (a != NULL) {
            int *p = a;
            for (int i=0;i<n;i++) {
                printf("Enter element %d of myArray: ",i);
                if (scanf("%d",p) != 1) {
                    printf ("Error reading number.\n");
                    free(a);
                    return NULL;
                }
                p = p + 1;
            }
        return a;
    }    
}
void printArray(int *p, int n) {
    for (int i=0; i<n; i++) {
        printf("myArray[%d] = %d\n",i,*p);
        p++;
    }
}
int prodArray(int *p, int n) {
    int prod = 1;
    for (int i=0; i<n; i++) {
        prod = prod*(*p);
        p++; 
    }
    return prod;
}
