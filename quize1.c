#include <stdio.h>

int main() 
{
    printf("yes=y\n");

    printf("no=n\n");

    char a, b, w;

    //for maths
    
    printf("are you passed in maths?\n");

    scanf(" %c", &a);

    
    if(a == 'y' || a == 'n')
    {
      if(a == 'y')
    {
         printf("you win 10 rupees.\n");
    }
     else if(a == 'n')
     {
         printf("you loos the prize.\n");
     }
    }
    //for  science

    printf("are you passed in science?\n");
    
    scanf(" %c", &b);

   
    if(b == 'y' || b == 'n')
    {
      if(b == 'y')
    {
         printf("you win 10 rupees.\n");
    }
     else if(b == 'n')
     {
         printf("you loos the prize.\n");
     }
    }
    //for both

     printf("are you passed in both maths and science?\n");
    
    scanf(" %c", &w);

   
    if(w == 'y' || w == 'n')
    {
      if(w == 'y')
    {
         printf("you win 40 rupees.\n");
    }
     else if(w == 'n')
     {
         printf("you loos the prize.\n");
     }
    }
     return 0;
}