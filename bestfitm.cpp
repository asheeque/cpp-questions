#include<conio.h>
#include<stdio.h>

int main()
{
	int process[10],block[10],block_Empty[10],block_Status[10],cur,i,np,mb,space,min=1000,j;
	
	printf("Enter the no of processes\n");
	scanf("%d",&np);
	printf("Enter number of blocksss\n");
	scanf("%d",&mb);
	printf("Enter the sizes of the blocks\n");
	for(i=0;i<mb;i++)
	{
		scanf("%d",&block[i]);
		block_Empty[i]=0;
		block_Status[i]=-2;
	}
		printf("Enter the sizes of the PROCESSES\n");
	for(i=0;i<np;i++)
	{
		scanf("%d",&process[i]);
	}
	
	for(i=0;i<np;i++)
	{
		for(j=0;j<mb;j++)
		{
			if(block_Empty[j]==0 && block[j]>=process[i])
			{
				space=block[j]-process[i];
				if(space<min)
				{
					min=space;
					cur=j;
				}
			}
		}
		min=1000;
		block_Empty[cur]=1;
		block_Status[cur]=i+1;
	}
	for(i=0;i<mb;i++)
	{
	printf("BLock=%d\tProcess=%d\n",i+1,block_Status[i]);
}
}
