#include<stdio.h>
int fact(int n);
int main()
{
   int num, res;
   printf("Enter a number:");
   scanf("%d",&num);
   res =fact(num);
   printf("\nfactorial of %d is: %d",num, res);;
   return 0;
}
int fact(int n)
{
 
   if(n==0)
      return(1);
   return(n*fact(n-1));
}
