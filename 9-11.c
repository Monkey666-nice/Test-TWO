#include<stdio.h>
#include<string.h>
struct st{ //�ṹ���� 
	int x;
	char y[10];
	int z;
};
void fun(struct st *s){ //�ṹָ����Ϊ�β� 
	s->x=112;
	strcpy(s->y,"wangli");
	s->z=88;
}
int main(){
	struct st a={
		101,
		"zhangsan",
		98
	},*p=&a;
	printf("%d,%s,%d\n",p->x,p->y,p->z);
	fun(p);
	printf("%d,%s,%d\n",p->x,p->y,p->z);
	return 0;
} 
