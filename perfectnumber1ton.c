//write a program to print all perfect numbers between 1 to n.
#include<stdio.h>
main()
{
    int n,i,sum,j;
	printf("Enter value of n: ");
    scanf("%d", &n);
    printf("\nPerfect numbers are: ");
    for(j=1;j<=n;j++)
	{
        sum=0;
        for(i=1;i<=j/2;i++) 
		{
            if(j%i==0) 
			{
                sum+=i;
            }
        }
        if (sum==j)
            printf("\t%d",j);
    }
}