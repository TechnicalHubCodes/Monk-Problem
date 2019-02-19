#include<stdio.h>
#include<conio.h>

void main()
{
	int n,co[100],io[100],i,j,count=0,x;
	clrscr();
	printf("Enter no of processes:\n");
	scanf(" %d",&n);
	printf("\nCalling order of processes:\n");
	for(i=0;i<n;i++);
	{
		scanf("%d",co+i);
	}
	printf("\nIdeal order of processes:\n");
	for(i=0;i<n;i++);
	{
		scanf("%d",&io[i]);
	}
	i=0;
	while(i<n)
	{
		if(io[i]==co[i])
		{
			i++;
			count++;

		}
		else
		{
			x=co[0];
			for(j=0;j<n-1;j++)
			{
				co[j]=co[j+1];
			}
			co[n-1]=x;
			count++;
		}
	}
	printf("\nTime taken for entire queue to be executed:\n %d",count);
	getch();
}