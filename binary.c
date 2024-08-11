#include<stdio.h>
void main(){
    int i,n,a[10],low,high,mid,found=0,item;
    printf("Enter how many elements you want in an array\n");
    scanf("%d",&n);
    printf("enter sorted elements in an array\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the item you want to search");
    scanf("%d",&item);
    low=0;
    high=n-1;
    mid=(low+high)/2;
    for(i=0;i<n;i++){
        if(item==a[mid])
        {
            found=1;
            printf("%d item found at %d location",item,mid+1);
            break;
        }
        if(item<a[mid]){
            high=mid-1;
        }
        if(item>a[mid])
        {
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    if(found==0){
        printf("item not found");
    }
    }

    
    
  
  
    

