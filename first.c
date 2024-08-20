#include <stdio.h>

// int main(){
//     int a = 3;
//     float b = 4.5;
//     double c = 5.25;
//     float sum;

//     sum = a + b + c;

//     printf("Sum: %f\n", sum);

//     return 0;
// }

int main(){
    int average;
    int grades[10];
    int desirableNumber = 85;

    grades[0] = 80;
    grades[1] = 90;
    grades[2] = desirableNumber * 3 - (grades[0] + grades[1]);

    average = (grades[0] + grades[1] + grades[2]) / 3;

    printf("the average number is %d", average);
}