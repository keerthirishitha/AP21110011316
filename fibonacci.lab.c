/* generate fibonacci series upto n terms*/
#include<stdio.h>
void main()
{   int first=0,second=1,next,n,i;
    printf("Enter n value:");
    scanf("%d",&n);
    printf("%d\t%d\t",first,second);
    next=first+second;
     for(i=3;i<=n;i++)

       {
            printf("%d\t",next);
            first=second;
            second=next;
            next=first+second;

       }

}
