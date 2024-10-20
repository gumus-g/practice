#include <stdio.h>
# define SIZE 10
float average (int a, int b, int c){
    float avg;
    avg = (a+b+c)/3.0;
    a = 200;
    b = 3000;
    c = 1000;
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

int main (int argc, char *argv[]) {
    int x = 15;
    int y = 35;
    int z = 40;
    float avg;
    char msg[100] = "";
    int arr[SIZE] = {15, 35, 40, 20, 40, 30};
    int size = 6;

    avg = average(x, y, z);

    printf("The average of %d, %d, and %d is %.2f\n", x, y, z, avg);
    printf("%s\n", averageWMsg (x, y, z, msg));
    
    printf("The array is : \n[");
    for (int i=0; i<size ; i++){        
        printf("%d,", arr[i]);
    }
    printf("]\n");

    printf("The average of the array is %.2f\n",  averageArray(arr,size));

    printf("The array after the call to averageArray is : \n[");
    for (int i=0; i<size ; i++){        
        printf("%d,", arr[i]);
    }
    printf("]\n");

    printf("The arguments to this program were: \n");
    for (int i=0; i<argc ; i++){  
        printf("%s\n", argv[i]);
    }
    return 0;
}