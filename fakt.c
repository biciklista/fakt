#include <stdio.h>


int fakt()
{
	int num;
	int i=2;
	scanf_s("%d", &num);	
	
	while(num)
	{		
			if(num%i!=0)
			{
				++i;
			}
			else
			{
				num/=i;
				printf("%d ", i);
			}

			if(num==1)
				return 0;
	}
	
	return 0;
}
