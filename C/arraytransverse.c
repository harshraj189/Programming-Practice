#include <stdio.h>
#define max 5
int main(){
    int i,arr[max];
    for(i=0;i<5;i++){
    
    printf("Enter the %d number:",i+1);
    scanf("%d",&arr[i]);}
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);

    }


}