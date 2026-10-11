#include <stdio.h>
power(int x,int y);

power(int x,int y)
{
	if(y == 0)
	{
		return 1;
	}
	return x*  power(x,y - 1);
}
int main()
{
	int i;
	int x,y;
	scanf("%d%d",&x,&y);
	i = power(x,y);
	printf("%d",i);
	
}