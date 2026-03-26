#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    c=a;
    printf("Enter the 2st number:");
    scanf("%d",&b);
    a=b;
    b=c;
    printf("1st number:%d\n",a);
    printf("2nd number:%d",b);
}