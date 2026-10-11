#include <stdio.h>
void twosum(int* nums,int numsize, int target, int* result)
{
	for(int i  = 0;i < numsize; i++)
	{
		for( int j = i + 1; j < numsize; j++ )
		{
			if(nums[i] + nums[j] == target)
			{
				result[0] = i;
				result[1] = j;
				return;
			}
		}
	}
}
int main()
{
	int result[2];
	int nums1[] = {1,2,3,4,5,6,7,8,9};
	twosum(nums1,9,10,result);
	
	printf("%d，%d", result[0],result[1]);
	
	
	
	
	
	
	return 0;
}