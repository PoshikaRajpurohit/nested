#include<stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	printf("Enter the value of c=");
	scanf("%d",&c);
	printf("Enter the value of d=");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)	
			{
				printf("A is max");	
			}
			else
			{
				printf("D is max");	
			}
		}
		else if(c>d)
		{
			printf("C is max");
		}
		else
		{
			printf("D is max");
		}
	}
	else
	{ 
	if(b>c)
		{
			if(b>d)	
			{
				printf("B is max");	
			}
			else
			{
				printf("D is max");	
			}
		}
		else if(c>d)
		{
			printf("C is max");
		}
		else
		{
			printf("D is max");
		}
	}
	
}