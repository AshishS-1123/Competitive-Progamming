#include<stdio.h>
int main()
{
	long long int test;
	scanf("%lld",&test);
	for(;test != 0;test--)
	{
		long long int num=0,k;		
		int temp = 1;
		scanf("%lld",&num);
		if(num==1)
		printf("\n0");
		else if(num<4)
		printf("\n1");
		else
		{
			for(k=4;num>=k;k = k<<1)
			{
				if(temp == 5)
				temp = 2;
				else
				temp++;
			}
			temp--;
			switch(temp)
			{
				case 1: printf("\n2");
						break;
				case 2: printf("\n3");
						break;
				case 3: printf("\n0");
						break;
				case 4: printf("\n9");
						break;
			}
		}
	}
	return 0;
}

