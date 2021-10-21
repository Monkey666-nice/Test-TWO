#include<stdio.h>
#include<stdlib.h>
struct link{ //链表的结点结构 
	char ch; //数据域，保存从键盘输入的一个字符
	struct link *next; //指针域，指向下一个结点 
};
struct link *create(){ //创建链表 
	char ch;
	struct link *h=NULL,*p;
	while((ch=getchar())!='\n'){ //从键盘输入一行字符 
		p=(struct link *)malloc(sizeof(struct link)); //为新结点p分配内存 
		p->ch=ch; //为结点p读入数据 
		p->next=h; //将新结点插入到链首 
		h=p;
	}
	return h; //链表创建完毕，返回头指针h 
}
void main(){
	
}
