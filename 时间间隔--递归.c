#include <stdio.h>

long long getSignal(long long t, int m)
{
    long long a = 0; 
    long long b = 1; 
    int cnt = 0;

    if(a > t)
    {
        cnt++;
        if(cnt == m) return a;
    }
    if(b > t)
    {
        cnt++;
        if(cnt == m) return b;
    }

    for(;;)
    {
        long long next = a + b;
        if(next > t)
        {
            cnt++;
            if(cnt == m)
            {
                return next;
            }
        }
        a = b;
        b = next;
    }
}

int main(void)
{
    long long t;
    int m;
    scanf("%lld %d", &t, &m);
    long long ans = getSignal(t, m);
    printf("%lld\n", ans);
    return 0;
}
