// #include <stdio.h>

// int main() 
// {
//     printf("Hello, World!");
//     return 0;
// }

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two integers
    sum = num1 + num2;

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
