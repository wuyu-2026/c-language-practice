#include <stdio.h>
#define pi 3.1415926535
float turn(float a );
float turn (float a)
{
	while(1)
	{
	
		if(a >= 360)
		{
			a -= 360;	
		}
		else if(a < 0)
		{
			a += 360;
		}
		else
		{
				break;
		}
	
	
	}

a = a * pi /180.f;
return a;
}
 
 int main()
 {float i;
 float a;
 	scanf("%f",&a);
 	i  =  turn(a);
 	printf("%f",i);
 }