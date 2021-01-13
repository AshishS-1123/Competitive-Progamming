#include <stdio.h>
int main()
{
	int t,n,a,b;
	scanf("%d",&t);
	while(t--)
	{
		int arr[8] = {0,0,0,0,0,0,0,0};
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d %d",&a,&b);
			if(a>8)
			{
				continue;
			}
			else
			{
				arr[a-1] = (b > arr[a-1])? b : arr[a-1];
			}
		}
		printf("%d\n",arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6]+arr[7]);
		
	}
	 return 0;
}
	 

