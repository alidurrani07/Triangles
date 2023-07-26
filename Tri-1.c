#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter Number of lines:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int k=1;
		for(j=1;j<=n-1+i;j++)
		{
			if(j<=n-i||j>=n+i)
			{
				printf("  ");
			}
			else{
				printf(" %d",k);
				k++;
			}
		}
		printf("\n");
	}
}