#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number of lines\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
