#include <stdio.h>
int main()
{
    int num1,num2;

    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    if (num1>num2)
        printf("Highest number is %d",num1);
    else
        printf("Highest number is %d",num2);
}
