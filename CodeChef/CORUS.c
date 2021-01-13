
#include <stdio.h>

int main( void )
{
	int t;
	scanf("%d", &t);
	
	while( t-- )
	{
		int n, q;
		scanf("%d %d", &n, &q);
		
		int alph[26];
		
		for(int i = 0;i < 26;++i)
			alph[i] = 0;
		
		char str[n];
		scanf("%s", str);
		for(int i = 0;i < n;++i)
		{
			++alph[(int)str[i] - 97];
		}
		int query, pending;
		for(int i = 0;i < q;++i)
		{
			
			scanf("%d", &query);
			pending = 0;
			for(int j = 0;j < 26;++j)
			{
				if(alph[j] > query)
				{
					pending += alph[j] - query;
				}
			}
			printf("%d\n", pending);
		}
		
	}
	return 0;
}

