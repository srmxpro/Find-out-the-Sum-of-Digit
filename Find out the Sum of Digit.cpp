#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	while (n>0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	printf("%d",sum);
	return 0;
}