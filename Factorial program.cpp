#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,fact=1;
	printf("Enter whose facorial you want\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	
		printf("The factorial for %d is : %d\n",n,fact);
		
return 0;
}
