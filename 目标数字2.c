#include <stdio.h>
#define N 100

int main(void)
{
    int target;
    int array[N];
    int cnt = 0;
    int x;

    printf("请输入target：");
    scanf("%d", &target);

    printf("输入数组元素，输入0结束：\n");
    while(1)
    {
        scanf("%d", &x);
        if(x == 0) break;
        array[cnt++] = x;
    }

    // 先输出 和等于target 的所有组合 i<j避免重复 (a,b)和(b,a)算同一组
    printf("====两数之和等于%d====\n", target);
    for(int i = 0; i < cnt; i++)
    {
        for(int j = i+1; j < cnt; j++)
        {
            if(array[i] + array[j] == target)
            {
                printf("%d + %d = %d\n", array[i], array[j], target);
            }
        }
    }

    //再输出 乘积等于target
    printf("====两数乘积等于%d====\n", target);
    for(int i = 0; i < cnt; i++)
    {
        for(int j = i+1; j < cnt; j++)
        {
            if(array[i] * array[j] == target)
            {
                printf("%d * %d = %d\n", array[i], array[j], target);
            }
        }
    }
    return 0;
}
