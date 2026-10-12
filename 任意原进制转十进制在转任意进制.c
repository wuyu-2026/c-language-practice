#include <stdio.h>
#include <string.h>

// 字符转数字 'A'→10, '3'→3
int char2num(char c)
{
    if(c >= '0' && c <= '9') return c - '0';
    if(c >= 'A' && c <= 'F') return c - 'A' + 10;
    if(c >= 'a' && c <= 'f') return c - 'a' + 10;
    return -1;
}

// 数字转字符 10→'A'
char num2char(int n)
{
    if(n <10) return n + '0';
    else return n -10 + 'A';
}

// 【第一步】任意进制字符串 → 十进制long long
long long toDec(char *s, int fromBase)
{
    long long res = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        int val = char2num(s[i]);
        res = res * fromBase + val;
    }
    return res;
}

//【第二步】十进制long long → 目标进制字符串
void decToAny(long long num, int toBase, char *out)
{
    int idx =0;
    if(num ==0){
        out[idx++] = '0';
        out[idx] = '\0';
        return;
    }
    while(num >0)
    {
        int rem = num % toBase;
        out[idx++] = num2char(rem);
        num = num / toBase;
    }
    out[idx] = '\0';
    // 反转字符串
    int l=0, r = idx-1;
    while(l<r)
    {
        char t = out[l];
        out[l] = out[r];
        out[r] = t;
        l++; r--;
    }
}

int main()
{
    char input[100], output[100];
    int from, to;
    printf("原数字：");
    scanf("%s", input);
    printf("原来进制(2~16)：");
    scanf("%d", &from);
    printf("目标进制(2~16)：");
    scanf("%d", &to);

    long long dec = toDec(input, from);
    decToAny(dec, to, output);
    printf("转换结果：%s\n", output);
    return 0;
}
