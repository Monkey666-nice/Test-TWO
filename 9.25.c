#include <stdio.h>
enum fruits{watermelon,peach,sttrawberry,banana,pineapple,apple};
int main()
{
enum fruits x;int k;
printf("input k=(0-5);");
scanf("%d",&k);
x=(enum fruits)k;
if(x==peach)
	printf("x=%d,peach=%d,x==peach\n",x,peach);
else if(x>peach)
	printf("x=%d,peach=%d,x>peach",x,peach);
else if(x<peach)
	printf("x=%d,peach=%d,x<peach\n",x,peach);
return 0;
}
