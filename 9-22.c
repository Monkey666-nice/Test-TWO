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
struct link * sort(struct link *h)
{   struct link *p1, *p2, *q1,*q2;
    p1=h;
	p2=p1->next;
	while(p2)
    {  
		if(p1->ch<=p2->ch){ 
			p1=p2;
			p2=p2->next;
		}else{
			p1->next=p2->next;
    		q1=h;
			q2=q1->next;
			if(p2->ch<h->ch){ 
				p2->next=h;
				h=p2;
			}else{
				q1=h;
	 			q2=h->next;
				 while(p2->ch>q2->ch){ 
	 				q1=q2;
	  				q2=q2->next;
	 			}
	 			p2->next=q2;
	 			q1->next=p2;
			}
			p2=p1->next;
		}
	}
	return h;
}
void main(){
	
}
