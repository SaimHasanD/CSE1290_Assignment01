#include <stdio.h>

int main() {
    int i;
    printf("Odd numbers from 200 to 250:\n");
    for (i = 200; i <= 250; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    return 0;
}
