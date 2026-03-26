#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a<=1){
     printf("%d is not a prime number\n",a);
    }
    else if(a==2){
     printf("%d is a prime number",a);
    }
    else{
     for(b=a-1;b>1;b--){
        if(a%b==0){
         printf("%d is not prime", a);
         break;
        }
        else{
         if(b==2)
          printf("%d is a prime number",a);
         }
      }
     }
}