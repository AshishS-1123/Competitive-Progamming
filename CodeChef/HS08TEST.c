#include <stdio.h>
int main()
{
	int x;
	float y;
	scanf("%d %f",&x,&y);
	if((x<=(y-0.5))&&(!(x%5)))
	{
		printf("\n%0.2f",y-x-0.5);
	}
	else
	{
		printf("\n%0.2f",y);
	}
	return 0;
}
