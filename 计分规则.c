#include <stdio.h>

int main(void)
{
    // 第1行 红队数据 R_tr_top R_scat_L1 R_scat_L2 R_L1_base R_L1_mid R_L2_base R_L2_mid
    int R_tr_top, R_scat_L1, R_scat_L2, R_L1_base, R_L1_mid, R_L2_base, R_L2_mid;
    // 第2行 蓝队数据
    int B_tr_top, B_scat_L1, B_scat_L2, B_L1_base, B_L1_mid, B_L2_base, B_L2_mid;
    // 第3行 塔顶 L1_top_red L1_top_blue L2_top_red L2_top_blue
    int L1_top_red, L1_top_blue, L2_top_red, L2_top_blue;
    // 第4行 五色石
    int stone;

    //读取四行输入
    scanf("%d %d %d %d %d %d %d",
           &R_tr_top, &R_scat_L1, &R_scat_L2, &R_L1_base, &R_L1_mid, &R_L2_base, &R_L2_mid);

    scanf("%d %d %d %d %d %d %d",
           &B_tr_top, &B_scat_L1, &B_scat_L2, &B_L1_base, &B_L1_mid, &B_L2_base, &B_L2_mid);

    scanf("%d %d %d %d", &L1_top_red, &L1_top_blue, &L2_top_red, &L2_top_blue);
    scanf("%d", &stone);


    // ==========计算分数==========
    int red = 0, blue = 0;
    //红队
    red += (R_tr_top + R_scat_L1 + R_scat_L2) * 5;
    red += R_L1_base * 10 + R_L1_mid * 20;
    red += R_L2_base * 20 + R_L2_mid * 40;
    red += L1_top_red * 40 + L2_top_red * 80;

    //蓝队
    blue += (B_tr_top + B_scat_L1 + B_scat_L2) * 5;
    blue += B_L1_base * 10 + B_L1_mid * 20;
    blue += B_L2_base * 20 + B_L2_mid * 40;
    blue += L1_top_blue * 40 + L2_top_blue * 80;

    //五色石250分
    if(stone == 1) red += 250;
    if(stone == 2) blue += 250;


    // ==========破平条件==========
    char res[20];
    if(red > blue){
        sprintf(res, "红队胜");
    }else if(blue > red){
        sprintf(res, "蓝队胜");
    }else{
        //分数相等，执行破平规则
        int red_top = L1_top_red + L2_top_red;
        int blue_top = L1_top_blue + L2_top_blue;

        int red_L2_total = R_L2_base + R_L2_mid;
        int blue_L2_total = B_L2_base + B_L2_mid;

        int red_L1_total = R_L1_base + R_L1_mid;
        int blue_L1_total = B_L1_base + B_L1_mid;

        if(stone == 1){
            sprintf(res, "红队胜");
        }else if(stone == 2){
            sprintf(res, "蓝队胜");
        }else if(red_top > blue_top){
            sprintf(res, "红队胜");
        }else if(blue_top > red_top){
            sprintf(res, "蓝队胜");
        }else if(red_L2_total > blue_L2_total){
            sprintf(res, "红队胜");
        }else if(blue_L2_total > red_L2_total){
            sprintf(res, "蓝队胜");
        }else if(red_L1_total > blue_L1_total){
            sprintf(res, "红队胜");
        }else if(blue_L1_total > red_L1_total){
            sprintf(res, "蓝队胜");
        }else{
            sprintf(res, "平局");
        }
    }

    printf("%d\n%d\n%s\n", red, blue, res);
    return 0;
}
