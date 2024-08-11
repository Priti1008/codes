#include<stdio.h>
void main(){
    int a[10],n,item,i;
    printf("Enter the no. of elements you want in a array:");
    scanf("%d",&n);
    printf("Enter the Array elements:");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
      }
    printf("Enter the element you want to search in an array:");
    scanf("%d",&item);
    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==item)
        {
           count =1;
           printf("element found at %d ",i+1);
           break;
        }
    
    }
    if(count==0);
    {
        printf("item not found\n");
    }
return 0;
}