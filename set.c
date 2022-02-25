#include<stdio.h>
int main()
{
	int bit,num,n,new;
	printf("Enter a number");
	scanf("%d",&num);
	printf("Enter the bit to set");
	scanf("%d",&n);
	bit = (num >>n)&1;
   printf("The %d bit of %d is %d",n,num,bit);
   if(bit ==1)
   printf("\nBit is set");
   else
   {
   new=(1<<n)|num;
   printf("\nAfter setting the bit is %d",new);
   }

}

