#include <stdio.h>
int main()
{
 char p;
 scanf("%c",&p);
 if(p>='A'&&p<='Z')
 {
printf("%c",p + 32);
 }
	else if(p>='a'&&p<='z')
	{
		printf("%c",p - 32);
	}

	return 0;
}