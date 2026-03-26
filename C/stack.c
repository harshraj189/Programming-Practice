#include<stdio.h>
#define MAX 5 
typedef struct{
    int arr[MAX];
    int top;
}Stack;
void initialize(Stack* stack){
    stack->top=-1;
}
int pop(Stack* stack ){
    if (stack->top==-1)
     printf("Stack is Empty");
    else;
    printf("deleted item %d" arr[top]; );
     top=top-1;
}
void push(Stack* stack,int value){
    if(top==MAX-1)
     printf("Stack is over flow");
    else;
     top=top+1;
    arr[top]=value;
}
int main(){
    push(30);
    push(40);
    push(60);

for(i=0,i++,i<3)
 printf(arr[i]);
}