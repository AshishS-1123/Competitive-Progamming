#include <stdio.h>
int main()
{
	int t,n,k,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		k=0;
		for(;n>0;n=n/10)
		{
			k=k+n%10;
		}
		printf("%d\n",k);
	}
	return 0;
}
