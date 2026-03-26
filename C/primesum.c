#include<stdio.h>
#include<stdbool.h>
int i,dig,num,sum=0;
int prime(){
    int isprime=1;
    if(dig<=1){
        sum=sum+0;
    }
    else{
        for(i=dig-1;i>1;i--){
        if(dig%i==0){
        isprime=0;}
        }
     }    
    if(isprime==1){
        sum=sum+dig;
    }
    return sum;
 }

int digit(){
    dig=num%10;
    num=num/10;
    return dig;
}
int main(){

    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0){
        digit();
        prime();
    }
    printf("The sum is %d.\n",sum);
    
}