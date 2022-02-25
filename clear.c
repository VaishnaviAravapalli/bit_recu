#include<stdio.h>
int main()
{
	int num,n,new;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter a bit to clear");
	scanf("%d",&n);
	new=num&(~(1<<n));
	printf("\n number before clearind is %d",num);
	printf("\n number after clearing is %d",new);
}
