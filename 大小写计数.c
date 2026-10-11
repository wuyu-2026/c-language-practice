#include <stdio.h>
void AnalyzeText(const char *s, int *upper, int *lower, int *digit, int *other, int *first_upper, int *last_digit);
void AnalyzeText(const char *s, int *upper, int *lower, int *digit, int *other, int *first_upper, int *last_digit)
{
	*first_upper = -1;
	*last_digit = -1;
 for(int i = 0; s[i] != '\0';i++)
 {
 	if(s[i] <= 'z' && s[i] >= 'a')
	 {
	 	(*lower)++;
	 
	 }
	 
	 else if(s[i] <= 'Z' && s[i] >= 'A')
	 {
	 	(*upper)++;
	 	if(*first_upper == -1)
		 {
		 	*first_upper = i;
		 }
	 	
	 }
	 else if(s[i] >= '0' && s[i] <= '9')
	 {
	 	(*digit)++;
		*last_digit = i;
	 }
	 else
	 {
	 	(*other)++;
	 }
 }
}

int main()
{   const char s1[100] = "RoboMaster 2026";
	int upper1 = 0;
	int lower1 = 0;
	int digit1 = 0;
	int other1 = 0;
	int first_upper1;
	int last_digit1;
	const char *s = s1;
	int *upper = &upper1;
	 int *lower = &lower1;
	 int *digit = &digit1;
	 int *other = &other1;
	 int *first_upper = &first_upper1;
	 int *last_digit = &last_digit1;
	 
	AnalyzeText(s,upper,lower,digit,other,first_upper, last_digit);
	printf("%d%d%d%d%d%d",upper1,lower1,digit1,other1,first_upper1,last_digit1);
	return 0;
}