#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 5
struct stuscore{ //ѧ���ɼ��ṹ����
	char sno[8]; //ѧ��
	char sname[10]; //����
	char electivename; //ѡ�޿δ���
	union electivescore{ //ѡ�޿γɼ�����������
		float statistics; //ͳ��ѧ�ɼ�
		float maintenance; //����ά���ɼ�
		char tourism; //���ι���ɼ�
	}elective;
};
int main(){
	struct stuscore stu[N];
	int i,j,count[3]={0}; //����count����ͳ�Ƹ���ѡ�޿ε�����
	char ename[10];
	float temp;
	printf("������ѧ������Ϣ��\n");
	printf("ѧ�� ���� ѡ�δ��루S��M��T���ɼ�\n");
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
			strcpy(ename,"ͳ��ѧ");
		}else if(i==1){
			strcpy(ename,"����ά��");
		}else{
			strcpy(ename,"���ι���");
		}
		printf("\t\t��%d��ͬѧѡ����%s:\n",count[i],ename);
		printf("\t\tѧ��\t\t����\t\t�ɼ�\n");
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





