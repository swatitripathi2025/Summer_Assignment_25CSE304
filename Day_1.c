#include<stdio.h>
void main()
{
    int n,i,s=0;
    printf("enter any natural number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("%d", s);
    getch();
}


#include<stdio.h>
void main()
    {
        int i, n;
        printf("enter any given number");
        scanf("%d",&n);
        for(i=1;i<=10;i++)
        {
        printf("%d*%d=%d/n",n,i,(n*i));
        }
        getch();
    }

#include<stdio.h>
void main()
{
    int i,n,fact=1;
    printf("enter any given number");
    sacanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    getch();
}

#include<stdio.h>
void main()
{
    int n,count=0;
    printf("enter the number ");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("%d",count);
    getch();
}