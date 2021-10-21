#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 5
struct stuscore{ //学生成绩结构类型
	char sno[8]; //学号
	char sname[10]; //姓名
	char electivename; //选修课代码
	union electivescore{ //选修课成绩共用体类型
		float statistics; //统计学成绩
		float maintenance; //电脑维护成绩
		char tourism; //旅游管理成绩
	}elective;
};
int main(){
	struct stuscore stu[N];
	int i,j,count[3]={0}; //数组count用来统计各门选修课的人数
	char ename[10];
	float temp;
	printf("请输入学生的信息：\n");
	printf("学号 姓名 选课代码（S，M，T）成绩\n");
	for(i=0;i<N;i++){
		printf("NO.%d:",i+1);
		scanf("%s %s %c",stu[i].sno,stu[i].sname,&stu[i].electivename);
		stu[i].electivename=toupper(stu[i].electivename);
		if(stu[i].electivename=='S'){
			scanf(" %f",&temp);
			stu[i].elective.statistics=temp;
			count[0]++;
		}else if(stu[i].electivename=='M'){
			scanf(" %f",&temp);
			stu[i].elective.maintenance=temp;
			count[1]++;
		}else{
			scanf(" %c",&stu[i].elective.tourism);
			count[2]++;
		}
	} 
	printf("\n\t-------------------------------------------\n");
	for(i=0;i<3;i++){
		if(i==0){
			strcpy(ename,"统计学");
		}else if(i==1){
			strcpy(ename,"电脑维护");
		}else{
			strcpy(ename,"旅游管理");
		}
		printf("\t\t有%d名同学选修了%s:\n",count[i],ename);
		printf("\t\t学号\t\t姓名\t\t成绩\n");
		for(j=0;j<N;j++){
			if(i==0&&stu[j].electivename=='S'){
				printf("\t\t%s\t\t%s\t\t%.lf\n",stu[j].sno,stu[j].sname,stu[j].elective.statistics);
			}else if(i==1&&stu[j].electivename=='M'){
				printf("\t\t%s\t\t%s\t\t%.lf\n",stu[j].sno,stu[j].sname,stu[j].elective.maintenance);
			}else if(i==2&&stu[j].electivename=='T'){
				printf("\t\t%s\t\t%s\t\t%c\n",stu[j].sno,stu[j].sname,toupper(stu[j].elective.tourism));
			}
		}
		printf("\t-------------------------------------------------------------\n");
	}
	return 0;
}





