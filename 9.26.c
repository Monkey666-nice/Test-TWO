#include<stdio.h>
enum fruits{watermelon,peach,strawberry,banana,pineapple,apple};
int main()
{   char fts[][20]={"西瓜","桃子","草莓","香蕉","菠萝","苹果"};
    enum fruits x,y,z,p;
	int k=0;
	for(x=watermelon;x<=apple;x++)
		for(y=x+1;y<=apple;y++)
			for(z=y+1;z<=apple;z++)
				for(p=z+1;p<=apple;p++)
					printf("%d:%s%s%s%s\n",++k,fts[x],fts[y],fts[z],fts[p]);
				printf("可以制作出%d种水果拼盘",k);
				return 0;
}
