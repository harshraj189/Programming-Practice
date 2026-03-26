#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the number for multiplication:");
    scanf("%d",&a);
    while(b<11){
        c=a*b;
        printf("%d x %d=%d\n",a,b,c);
        b+=1;
    }

}