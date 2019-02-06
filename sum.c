#include <stdio.h>
int main()
{
int a;
printf("Enter the number");
scanf("%d",&a);
    if(a>0)
        printf("positive");
    else if (a<0)
        printf("negative");
    else if (a==0)
        printf("Zero");
    return 0;
}
