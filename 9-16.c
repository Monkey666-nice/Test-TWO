#include<stdio.h>
#include<stdlib.h>
struct link{ //����Ľ��ṹ 
	char ch; //�����򣬱���Ӽ��������һ���ַ�
	struct link *next; //ָ����ָ����һ����� 
};
struct link *create(){ //�������� 
	char ch;
	struct link *h=NULL,*p;
	while((ch=getchar())!='\n'){ //�Ӽ�������һ���ַ� 
		p=(struct link *)malloc(sizeof(struct link)); //Ϊ�½��p�����ڴ� 
		p->ch=ch; //Ϊ���p�������� 
		p->next=h; //���½����뵽���� 
		h=p;
	}
	return h; //��������ϣ�����ͷָ��h 
}
void main(){
	
}
