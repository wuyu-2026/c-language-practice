#include <stdio.h>
int p[101];

int main()
{int count = 0;
	for(int i = 0;i <= 100;i++)
	{
		scanf("%d",&p[i]);count++;
		if(p[i] == 0)
	{count--;
		break;
	}
	}
	for(int i = 0; i < count - 1; i++)
	{
		for(int j = 0; j < count - 1 - i; j++)
		{
				if(p[j] < p [j+1])
		{
			int tep = p[j];
			p[j] = p[j+1];
			p[j+1] = tep;
		}
	    }
	}
	
	for(int i = 0; i < count; i++)
	{
		printf("%d\n",p[i]);//小到大
	}
	
	for(int i = 0; i < count - 1; i++)
	{
		for(int j = 0; j < count - 1 -i; j++)
		{
				if(p[j] > p [j+1])
		{
			int tep = p[j];
			p[j] = p[j+1];
			p[j+1] = tep;
		}
	    }
	}
	
	for(int i = 0; i < count; i++)
	{
		printf("%d\n",p[i]);//小到大
	}
}