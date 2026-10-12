#include <stdio.h>

// gas：每站油量，cost：每站开到下一站消耗，n：站点总数
int canCompleteCircuit(int gas[], int cost[], int n)
{
    // 枚举每一个候选起点
    for(int start = 0; start < n; start++)
    {
        int tank = 0;       // 每次换起点，油箱必须清零！【易错点】
        int ok = 1;         // 标记这个起点是否可行

        // 连续走n步，绕完整一圈
        for(int cnt = 0; cnt < n; cnt++)
        {
            // 环形下标，取模！【易错点】
            int cur = (start + cnt) % n;
            tank = tank + gas[cur] - cost[cur];

            if(tank < 0)  // 油量不足，这个起点失败
            {
                ok = 0;
                break;    // 跳出内层循环，测试下一个起点
            }
        }
        if(ok == 1)
        {
            return start; // 找到可行起点，直接返回
        }
    }
    return -1; // 全部起点都不行
}

int main()
{
    int gas[]  = {1,2,3,4,5};
    int cost[] = {3,4,5,1,2};
    int n = sizeof(gas)/sizeof(gas[0]);

    int res = canCompleteCircuit(gas, cost, n);
    printf("起点下标：%d\n", res);
    return 0;
}
