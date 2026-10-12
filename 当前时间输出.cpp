#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;
time(&now);
struct tm *t = localtime(&now);
const char *week[] = {"日","一","二","三","四","五","六"};
printf("%d年%02d月%02d日星期%s %02d：%02d\n",
        t->tm_year + 1900,
        t->tm_mon + 1,
        t->tm_mday,
        week[t->tm_wday],
        t->tm_hour,
        t->tm_min);
}