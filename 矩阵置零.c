#include <stdio.h>
#define  N 105
int mat[N][N];

int main()
{   int i;
    int j;
	int m,n;
	scanf("%d%d",&m,&n);
	for(i = 0;i < m;i++)
	{
		for(j = 0;j < n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	int row0,col0;
	row0 = 0;col0 = 0;
		for(j = 0;j < n;j++)
		{
			if(mat[0][j] == 0)
			row0 = 1;
		}
			for(i = 0;i < m;i++)
			{
				if(mat[i][0] == 0)
			col0 = 1;
			}
			// 必须加在 row0、col0 代码之后！
for(i = 1; i < m; i++)
{
    for(j = 1; j < n; j++)
    {
        if(mat[i][j]==0)
        {
            mat[i][0] = 0; //标记第i行
            mat[0][j] = 0; //标记第j列
        }
    }
}

			
			
				for(int i=1;i<m;i++)
				{
					for(j = 1;j < n;j++)
					{
						if(mat[i][0]==0 || mat[0][j]==0)
						{
							mat[i][j]=0;
						}
					}
				}
				if(row0) for(int j=0;j<n;j++) mat[0][j]=0;
				if(col0) for(int i=0;i<m;i++) mat[i][0]=0;
				
	 for(int i=0;i<m;i++)
	    {
        for(int j=0;j<n;j++){
            if(j>0) printf(" "); // 第一个数字前面不加空格
            printf("%d",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
