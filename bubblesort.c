#include<stdio.h>
void main(){
    int i,j,n,temp;
    int a[10];
    printf("enter the number of elements you want in an array:\n");
    scanf("%d",&n);
    printf("enter the array elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("sorted elements of array are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
