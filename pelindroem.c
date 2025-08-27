#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

