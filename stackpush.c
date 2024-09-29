#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top= -1;
void push(int data){
    if(top==MAX-1){
        printf("stack overflow\n");
        return;
    }
    top=top+1;
     stack_arr[top]=data;
}
void print(){
    int i;
    if(top== -1){
        printf("stack overflow\n");
        return;
    }
    for(i=top;i>=0;i--)
    printf("%d\n",stack_arr[i]);
    printf("\n");
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    print();
    return 0;
}