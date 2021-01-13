
#include <stdio.h>

#define  max(a, b) (a > b) ? a : b
#define  min(a, b) (a < b) ? a : b


int main( void )
{
	int t;
	scanf("%d", &t);
	
	while( t-- )
	{
		int n;
		scanf("%d", &n);
		
		int diff_arr[n];
		int num, prev_num;
		
		for(int i = 0;i < n;++i)
		{
			prev_num = num;
			scanf("%d ", &num);
			if( i == 0 )
				continue;
			diff_arr[i-1] = prev_num - num;
			if(diff_arr[i-1] < 0)
				diff_arr[i-1] *= -1;
		}
		
		int max = 1, min = n;
		int infected = 1;
		for(int i = 0;i < n-1;++i)
		{
			if(diff_arr[i] <= 2)
				++infected;
			else if(diff_arr[i] > 2)
			{
				max = max( max, infected );
				min = min( min, infected );
				infected = 1;
			}
		}
		max = max( max, infected );
		min = min( min, infected );
		printf("%d %d\n", min, max);
	}
	return 0;
}

