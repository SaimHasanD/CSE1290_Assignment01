#include <stdio.h>

int main() {


    //Task 1
    /*int i;

    printf("Odd numbers from 200 to 250:\n");

    for (i = 200; i <= 250; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }*/

    //Task 2
    /*int numbers[5], i, largest;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    for (i = 1; i < 5; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
    }

    printf("The largest number is: %d\n", largest);*/


    //Task 3
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
