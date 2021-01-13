#include <stdio.h>
int main()
{
	int i,n,j;
	scanf("%d\n",&n);
	for(;n>0;n--)
	{
		j = 0;
		scanf("%d",&i);
		for(;i>0;i=i/10)
		{
			j = 10*j + i%10;
		}
		printf("%d\n",j);
	}
	return 0;
}
