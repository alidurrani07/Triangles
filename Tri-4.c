#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter Number of lines:\n");
	scanf("%d",&n);
	int k;

	for(i=1;i<=n;i++)
	{
		k=n;
		for(j=1;j<=n*2-1;j++)
		{
			
			if(j<=n*2-1)
			{
				printf(" %d ",k);
			}
			else{
				printf("  ");
		 if(j>=n)
			{
				k--;
			}
			else{
				k++;
			}
		    }
		}
		printf("\n");
	}
}