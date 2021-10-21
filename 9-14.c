#include<stdlib.h>
#include<stdio.h>
int main(){
	int a,*p;
	p=(int *)malloc(2*sizeof(int)); //申请两个int类型变量的空间
	if(p){ //检查是否申请成功 
		free(p); //释放所申请的空间 
		printf("释放成功\n");
	} else{
		printf("释放失败\n");
	}
	return 0;
}
