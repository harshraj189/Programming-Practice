#include <stdio.h>
int main(){
    int a,i,arr[5]={21,45,67,12,87};
    printf("Enter the pos:");
    scanf("%d",&a);
    for(i=a-1;i<=4;i++){
        arr[i]=arr[i+1];
    }
    for(i=0;i<4;i++){
        printf("%d\t",arr[i]);
    }
}

