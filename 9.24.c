#include<stdio.h>
enum fruits{watermelon,peach,strawberry,banana,pineapple,apple};
int main()
{
	char fts[][20]={"watermelon","peach","strawberry","banana","pineapple","apple"};
	enum fruits x;
	int k;
	printf("input k=(0-5):");
	scanf("%d",&k);
	x=(enum fruits)k;
	printf("%s\n",fts[x]);
	return 0;
}
