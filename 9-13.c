#include <stdio.h>
#include <stdlib.h>
int main()
{int i,j=0,*p;
float sum=0; 
printf("���������ĸ�����");
 scanf("%d",&i);
p=(int *)malloc(i*sizeof(int));
if(p)
{while(j++<i)
{printf("��%d������:",j);
 scanf("%d",p++);
}
for(j=i;j>0;j--)
	sum+=*(p-j);
printf("ƽ��ֵ�ǣ�%f",(sum/i));
free(p-i);
}
else
	printf("�ڴ�������");
return 0;

}
