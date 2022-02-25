#include<stdio.h>
int main()
{
	int num,n,new;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter a bit to toggle");
	scanf("%d",&n);
	new=num^(1<<n);
	printf("Number before toggle is %d and number after toggl ei s%d",num,new);
}
