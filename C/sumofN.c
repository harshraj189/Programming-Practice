#include<stdio.h>
int sum=0,num;
int sumofn(int n){
    int i;
    for(i=n;i>0;i--){
        sum=i + sum;
    }
return sum;
}
int main(){
    printf("Enter the number N:");
    scanf("%d",&num);
    sumofn(num);
    printf("The sum of N numbers is %d\n",sum);
}