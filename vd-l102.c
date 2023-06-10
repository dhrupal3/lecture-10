#include<stdio.h>

int sum()
{
	int a,ans;
	
	printf("Enter Your Value = ");
	scanf("%d",&a);
	
	if(a%3==0)
	{
		if(a%5==0)
		{
			printf("Your Value Is Divide By 3 And 5.");
		}
		
	}
	else
	{
		printf("Your Value Is Not Devide By 3 And 5.");
	}
}

main()
{
 	sum();
}
