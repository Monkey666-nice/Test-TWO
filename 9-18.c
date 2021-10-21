#include<stdio.h>
#include<stdlib.h>
struct link{ //链表的结点结构 
	char ch; //数据域，保存从键盘输入的一个字符
	struct link *next; //指针域，指向下一个结点 
};
struct link *create(){ //创建链表 
	char ch;
	struct link *p1,*p2,*h=NULL;  //头指针h，尾指针p2，新结点p1
	while((ch=getchar())!='\n'){ //从键盘输入一行字符 
		p1=(struct link *)malloc(sizeof(struct link)); //为新结点p1分配内存 
		p1->ch=ch; //为结点p1数据域读入数据
		if(h==NULL){ //若链为空 
			h=p2=p1;
		}else{ //将新结点插入到链尾 
			p2->next=p1;
			p2=p1;
		}
	} 
	p2->next=NULL; //p2为链尾 
	return h; //链表创建完毕，返回头指针h 
}
void printlink(struct link * h){
	struct link *p;
	if(h==NULL){
		printf("h is empty!\n"); //若h为NULL，则输出链表为空 
		return ;
	}else{
		p=h;
	}
	while(p!=NULL){ //输出链表各结点的数据域信息 
		printf("%c",p->ch);
		p=p->next; // p指向下一个结点 
	} 
	printf("\n");
}
void search(struct link * h)
{    struct link * p;
     char x,m='n';
	 int id=1;
	 p=h;    
	 x=getchar();
	 while(p!=NULL)
	 {  if(p->ch==x)
	     {   printf("\'%c\'position is %d\n",x,id);
	         m='y';
	     }
	     p=p->next;
	     id++;
	 }
	 if(m=='n')printf("\'%c\'is not find!\n",x);
	 printf("\n");
}
void main(){
	
}
