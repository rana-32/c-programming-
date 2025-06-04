#include<stdio.h>
int main()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
if (n==0)
{
    printf("Zero");
    return 0;
}
    if (n>0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("Negative Number");
    }
    return 0;
}

