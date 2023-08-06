#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("Calculator\n");
    int a,b;


     int d=1;
       while(d>0)
    {

    printf("\nEnter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);


    char c;
    printf("+ - * / : ");
    scanf(" %c",&c);

    switch(c)
    {
    case '+':
        printf("addition of %d + %d = %d\n",a,b,a+b);
        break;
    case '-':
        printf("substraction of %d - %d = %d\n",a,b,a-b);
        break;
    case '*':
        printf("multiplication of %d * %d = %d\n",a,b,a*b);
        break;
    case '/':
        printf("division of %d / %d = %d\n",a,b,a/b);
        break;

    default:
        printf("invalid");
    }

    }
    return 0;
}
