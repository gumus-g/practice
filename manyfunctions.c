#include "manyfunctions.h"



int main (int argc, char *argv[]) {
    int x = 15;
    int y = 35;
    int z = 40;
    float avg;
    char msg[100] = "";
    int arr[SIZE] = {15, 35, 40, 20, 40, 30};
    int size = 6;
    int i = 0;

    avg = average(x, y, z);

    printf("The average of %d, %d, and %d is %.2f\n", x, y, z, avg);
    printf("%s\n", averageWMsg (x, y, z, msg));
    
    printf("The array is : \n[");
    for (i=0; i<size ; i++){        
        printf("%d,", arr[i]);
    }
    printf("]\n");

    printf("The average of the array is %.2f\n",  averageArray(arr,size));

    printf("The array after the call to averageArray is : \n[");
    for (i=0; i<size ; i++){        
        printf("%d,", arr[i]);
    }
    printf("]\n");

    printf("The arguments to this program were: \n");
    for (i=0; i<argc ; i++){  
        printf("%s\n", argv[i]);
    }
    printf("The value of abc in main  is %d\n", abc);

    for (i=0; i<3 ; i++){  
        extendLifetime();
    }
   
    return 0;
}

