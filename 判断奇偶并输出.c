#include <stdio.h>
#include <stdbool.h>

bool isOdd(int n)
{
    return  n > 0 ;
}
int main()
{
	int i;
	scanf("%d",&i);
	
	if(isOdd(i))
	{
		if(i % 2 == 0)
		{
			printf("偶数");
		}
		if(i % 2 == !0)
		{
			printf("奇数");
		}
	}
     else
     printf("false");
	
}