#include<stdio.h>
void main()
{
    int i,a,b;
    printf("Enter the value A and B");
    scanf("%d%d",&a,&b);
    for(i=a;i<+b;i++)
    if(i%4==0)
    {
        printf("%d",i);
    }
}
