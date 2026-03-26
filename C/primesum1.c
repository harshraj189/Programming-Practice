#include<stdio.h>

int main(){
    int sum=0;
int isprime=1;
    int i,digit;long int num;
    printf("Enter the number:");
    scanf("%ld",&num);
    while(num!=0){
        isprime=1;
        digit=num%10;
        if(digit<=1){
            sum=sum+0;
        }
        else if(digit==2){
            sum=sum+digit;
        }
        else{
            for(i=digit-1;i>1;i--){
                if(digit%i==0){
                isprime=0;
                break;
            }
            
            }
            if(isprime==1){
                sum=sum+digit;
            }

          
            
        }
        
        num=num/10;
        
    }
   printf("The sum is %d",sum);

}