//结构数组元素的地址作为实参进行传递
#include<stdio.h>
#include<stdlib.h>
struct rank{
	char *rid;
	int sc[3];
};
char fun(struct rank *t){
	int i,total=0;
	for(i=0;i<3;i++){
		total=total+t->sc[i];
	}
	t->rid=total>250?"Y":"N";
}
int main(){
		int i;
		struct rank stu[3]={{"101",100,82,75},{"102",90,75,88},{"103",78,85,64}};
		for(i=0;i<3;i++){
			printf("%s",stu[i].rid);
			fun(&stu[i]);
			printf("\t%s\n",stu[i].rid);
		}
		return 0;
	}
