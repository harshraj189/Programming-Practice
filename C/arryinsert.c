#include<stdio.h>
int main(){
    int i,a,b, arr[10]={12,34,75,87,63};
    printf("Enter the index:");
    scanf("%d",&b);
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=4;i>b-1;i--){
        arr[i+1]=arr[i];
    }
    arr[b]=a;
    for(i=0;i<6;i++){
        printf("%d\t",arr[i]);
    }


}