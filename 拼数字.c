#include <stdio.h>
void intcat(int n ,int m);

void intcat(int n ,int m)
{int count1 = 0;
	int count2 = 0;
	
	if(n < 0)
        n = -n;

    if(n == 0)  // 特殊情况：0是1位
        count1 = 1;
    else
    {
        int tmp_n = n;
while(tmp_n !=0){ tmp_n /=10; count1++; }

    }
    
    if(m < 0)
        m = -m;

    if(m == 0)  // 特殊情况：0是1位
        count2 = 1;
    else
    {
       int tmp_m = m;
while(tmp_m !=0){ tmp_m /=10; count2++;
     }

        
    }
	int str1[count1];
	
	int str2[count2];

for(int i = count1 - 1;i >= 0; i--)
{

str1[i] = n % 10;
n /=10;
}

for(int i = count2 - 1;i >= 0; i--)
{

str2[i] = m % 10;
m /=10;
}

int str3[count1 + count2];
for(int i = 0; i < count1 + count2 ; i++)
{
	if(i < count1)
	{
		str3[i] = str1[i];
	}
	else
	{
		str3[i] = str2[i - count1];
	}
}

for(int i = 0; i < count1 + count2 ; i++)
{
	printf("%d",str3[i]);
}
}

int main()
{	
	int n;
	int m;
	scanf("%d%d",&n,&m);
	intcat( n , m);
	
	
}
