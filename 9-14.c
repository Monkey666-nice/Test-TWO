#include<stdlib.h>
#include<stdio.h>
int main(){
	int a,*p;
	p=(int *)malloc(2*sizeof(int)); //��������int���ͱ����Ŀռ�
	if(p){ //����Ƿ�����ɹ� 
		free(p); //�ͷ�������Ŀռ� 
		printf("�ͷųɹ�\n");
	} else{
		printf("�ͷ�ʧ��\n");
	}
	return 0;
}
