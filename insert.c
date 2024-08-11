#include<stdio.h>
void main(){
     int i,n,x,pos;
     int a[100];

       printf("enter the number of elements in an array:\n");
       scanf("%d",&n);
       printf("enter the array elements: ");
       for(i=0;i<n;i++){
        scanf("%d",&a[i]);
       }
       printf("enter the position where the element wants to insert:");
       scanf("%d",&pos);
       printf("enter the element to be insert :");
       scanf("%d",&x);
       
       for(i=n-1;i>=pos;i--){
        a[i+1]=a[i];
       
      } 
        a[pos]=x;
        n=n+1;
       
       for(i=0;i<n;i++){
        printf("%d\n",a[i]);
       }

}
            


    

    