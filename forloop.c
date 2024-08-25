#include <stdio.h>

int main()
{
    printf("Hello, World!\n");
    int i,a;
    for (i =0; i < 10; i++)
    {
        printf("%d\nEnter your number\n", i);
        scanf("%d", &a);
         
        if (a == 5)
        {
            continue;
        }
     

        else if(a>10)
        {
            break;
        }

       printf("hi\n");
       
    }
    return 0;
}