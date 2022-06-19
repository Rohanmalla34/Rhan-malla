#include<stdio.h>
#include<conio.h>
 main()
{
	int i=1,s=0;
	do
	{
		if(i%2==0)
		{
			s=s+i;
		}
		i++;
	}
		while(i<=50);
	printf(" sum of even numbers from 1 to 50 is %d",s);


}
