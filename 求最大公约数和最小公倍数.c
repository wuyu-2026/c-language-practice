#include <stdio.h>
int gcd (int n,int m );
int lcm(int a ,int b,int j);
int gcd (int n,int m )
{
	while(m != 0)
	{
		int temp = n % m;
		n = m;
		m = temp;
	}
	return n;
}

int lcm(int a ,int b,int j)
{
	if(a == 0 || b == 0)
	{
	return 0;
	}
	
	return a / j * b;
}
int main()
{
	int a ;int b;
	scanf("%d%d",&a,&b);
	int j = gcd ( a, b );
	int i = lcm( a ,b,j);
printf("最大公约数=%d\n",j);
printf("最小公倍数=%d\n",i);
}