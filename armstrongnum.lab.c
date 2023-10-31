/*find whether the given number is an armstrong number or not*/
#include<stdio.h>
int main()
{   int n,r,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
        if(temp==sum)

        printf("\n%d is an Armstrong number\n",temp);

        else

        printf("\n%d is not an Armstrong number\n",temp);


    return 0;
}
