#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Check which number is greater
    if (num1 > num2) {
        printf("%d\n", num1);
    } else if (num2 > num1) {
        printf("%d\n", num2);
    } else {
        printf("0\n");
    }

    return 0;
}
