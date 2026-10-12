#include <stdio.h>

int main(void)
{
    int arr[5]; //空数组，未初始化
    int *p = arr; //指针指向数组首地址

    //通过指针赋值
    *p = 10;
    *(p+1) = 20;
    *(p+2) = 30;
    *(p+3) = 40;
    *(p+4) = 50;

    //遍历输出
    for(int i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
