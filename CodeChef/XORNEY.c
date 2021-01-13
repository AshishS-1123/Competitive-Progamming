#include <stdio.h>
int main()
{
	unsigned long long int c,n,t;
	scanf("%llu\n",&t);
	while(t--)
	{
		scanf("%llu %llu\n",&n,&c);
		n = c-n+1;
		if(n%2)
		{
			n = (n-1)%4;
			if(n)
			{
				if(c%2)
					printf("Even\n");
				else
					printf("Odd\n");
			}
			else
			{
				if(c%2)
					printf("Odd\n");
				else
					printf("Even\n");
			}
		}
		else
		{
			if(n%4)
				printf("Odd\n");
			else
				printf("Even\n");
		}
	}
	return 0;
}
