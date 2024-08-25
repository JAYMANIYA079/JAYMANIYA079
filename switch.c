#include <stdio.h>

int main() 
{
    int a;

    printf("Enter a char:");
    scanf("%d",&a);

    switch (a)
    {

    case 1:
       printf("yeas");

    case 2:
       printf("no");

    default:
       printf("yes");

    }

    return 0;
}