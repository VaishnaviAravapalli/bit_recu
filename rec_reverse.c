#include <stdio.h>

void reverse(int a[],int n){
    
    if(n==0){
        return;
    }else{
        printf("%d\n",a[n-1]);
        reverse(a,n-1);
    }
}

main()
{
  
  int arr[]={4,3,2,6,7};
  int size = sizeof(arr)/sizeof(arr[0]);
  reverse(arr,size);
}  
  
