#include <stdio.h>
#include <string.h>
#define SIZE 5

int main (int argc, char *argv[]) {
    int myArray[SIZE];
    int n;
    int prod = 1;
    char msg[200];

    sprintf(msg, "how many elements in the array (1-%d)? ", SIZE);
    printf("%s", msg);
    scanf("%d",&n);
    if ((n<=0) || (n>SIZE)) {
        printf ("Number of elements (%d) is invalid.\n",n);
        return 1;
    }
    for (int i=0;i<n;i++) {
        printf("Enter element %d of myArray: ",i);
        if (scanf("%d",&myArray[i]) != 1) {
            printf ("Error reading number.\n");
            return 1;
        }
    }
    for (int i=0; i<n; i++) {
        printf("myArray[%d] = %d\n",i,myArray[i]);
    }
    for (int i=0; i<n; i++) {
        prod *= myArray[i];
    }
    printf("The product of all elements of myArray is %d\n",prod);
    return 0;    

}