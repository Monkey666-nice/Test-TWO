#include<stdio.h>
typedef struct s
{	int index;
	int value;
}M;
int main()
{	static int i,j,k,c[4][4];
	M a[10]={{0,1},{3,2},{5,3},{6,4},{9,5},{15,6},{-1,0}},*p=a;
	M b[10]={{1,1},{3,2},{4,3},{6,4},{10,5},{13,6},{-1,0}},*q=b;
	while (p->index!=-1)
	{	i=p->index/4;
		j=p->index%4;
		c[i][j]=p->value;
		p++;
	}
	while(q->index!=-1)
	{	i=q->index/4;
		j=q->index%4;
		c[i][j]+=q->value;
		q++;
	}
	for(i=0;i<4;i++)
	{	for(j=0;j<4;j++)
			printf("%d",c[i][j]);
		printf("\n");
	}
	return 0;
}
