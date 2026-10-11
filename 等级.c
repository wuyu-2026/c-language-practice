#include <stdio.h>
int main()
{
	float score;
	scanf("%f",&score);
	if(score >= 90.0)
	{
		printf("优秀");
	}
	else if(score >= 80.0)
		printf("良好");
	else if(score >= 60.0)
	{
		printf("及格");
	}
	else  if(score < 60.0)
	{
		printf("不及格");
	}
}