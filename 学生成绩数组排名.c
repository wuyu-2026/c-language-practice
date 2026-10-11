#include <stdio.h>
#include <string.h>

struct student
{
	char name[100];
	char num[100];
	float score;
};

int main()
{
	struct student s1;
 strcpy(s1.name,"黄圳楷1 ");
  strcpy(s1.num,"210910");
	 s1.score = 100.0;

	struct student s2;
	 strcpy(s2.name,"黄圳楷2 ");
	strcpy(s2.num,"210910");
	s2.score = 101.0;
	
	struct student s3;
	strcpy(s3.name,"黄圳楷3 ");
	strcpy(s3.num,"210910");
	s3.score = 102.0;
	
	struct student s4;
	strcpy(s4.name,"黄圳楷4 ");
	strcpy(s4.num,"210910");
	s4.score =103.0;
	
	struct student s5;
	strcpy(s5.name,"黄圳楷5 ");
	strcpy(s5.num,"210910");
     s5.score = 104.0;
	
	struct student arr[5] = {s1, s2, s3, s4, s5};
	
	for(int i= 0;i < 5 -1;i++)
	{
		for( int j = 0; j < 5 -1 - i;j++)
		{
			if(arr[j].score < arr[j+1].score)
			{
				// 临时结构体变量，用来交换
				struct student temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	
	printf("\n====排序后（分数从高到低）====\n");
	for(int i = 0; i < 5; i++)
	{
		printf("姓名：%s，学号：%s，分数：%.1f\n", arr[i].name, arr[i].num, arr[i].score);
	}

	return 0;
}
