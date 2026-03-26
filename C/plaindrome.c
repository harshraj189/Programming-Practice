#include <stdio.h>
int main(){
    int num,temp,rev=0,perm;
    printf("Enter the number:");
    scanf("%d",&num);
    perm=num;
    while(num!=0){
        temp=num%10;
        rev=rev*10+temp;
        num=num/10;
    }
    if(rev==perm){
        printf("The number is plaindrome\n");
    }
    else{
        printf("The number is not plaindrome\n");
    }
}