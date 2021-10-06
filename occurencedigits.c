//find total occurences of each digits (0-9) using function
#include<stdio.h>
main()
{
	int a[10]={0},n,r,i;
	printf("\nEnter number to chcek occurences: ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		a[r]=a[r]+1;
		n=n/10;
	}
	for(i=0;i<10;i++)
	{
		if(a[i]!=0)
		printf("\n Count of %d digit is %d",i,a[i]);
	}
}
