#include<stdio.h>
#include<stdlib.h>
struct link{ //����Ľ��ṹ 
	char ch; //�����򣬱���Ӽ��������һ���ַ�
	struct link *next; //ָ����ָ����һ����� 
};
struct link *create(){ //�������� 
	char ch;
	struct link *p1,*p2,*h=NULL;  //ͷָ��h��βָ��p2���½��p1
	while((ch=getchar())!='\n'){ //�Ӽ�������һ���ַ� 
		p1=(struct link *)malloc(sizeof(struct link)); //Ϊ�½��p1�����ڴ� 
		p1->ch=ch; //Ϊ���p1�������������
		if(h==NULL){ //����Ϊ�� 
			h=p2=p1;
		}else{ //���½����뵽��β 
			p2->next=p1;
			p2=p1;
		}
	} 
	p2->next=NULL; //p2Ϊ��β 
	return h; //��������ϣ�����ͷָ��h 
}
void main(){
	
}
