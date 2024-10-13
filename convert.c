#include <stdio.h>
int main () {
    float days ;
    float weeks;
    printf("How many days you worked?");
    scanf("%f", &days);
    weeks = days / 7;
    printf("%15.2f days are %2.4f weeks\n", days, weeks);
    return 0;
}