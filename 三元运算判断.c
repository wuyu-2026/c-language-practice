#include <stdio.h>

int main()
{   int x;
	scanf("%d",&x);
	 int res1 = x - 200;
	 int res2 = x + 200;
	
	x > 200 ? printf("%d\n x大于200",res1) : x < 200 ? printf("%d\n x小于200",res2) : printf("x等于200\n");
	return 0;
}