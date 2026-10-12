#include <stdio.h>

int main(void)
{
    int date1 = 20; //0~31
    int date2 = 1;  //0或1
    int date3 = 2;  //0~3

    // =========压缩到1字节 unsigned char=========
    unsigned char pack;
    pack = 0;
    pack |= (date1 & 0x1F) << 3; //date1占高5位 左移3位
    pack |= (date2 & 0x01) << 2; //date2占第2位
    pack |= (date3 & 0x03);     //date3占低2位

    printf("压缩后1字节数值：%d\n", pack);

    // =========还原解压=========
    int d1,d2,d3;
    d1 = (pack >> 3) & 0x1F; //取出5位
    d2 = (pack >> 2) & 0x01; //取出1位
    d3 = pack & 0x03;        //取出低2位

    printf("还原后 date1=%d date2=%d date3=%d\n",d1,d2,d3);

    return 0;
}
