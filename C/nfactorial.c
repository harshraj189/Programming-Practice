#include<stdio.h>
int prod=1;
int factorial(int n){
    int i;
    for(i=n;i>0;i--){
        prod=prod*i;
    }
return prod;
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    factorial(num);
    printf("The factorial of %d is %d\n",num,prod);
}