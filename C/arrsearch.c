#include<stdio.h>
#include<stdbool.h>
int main(){
    int a,i,arr[5]={23,45,35,76,94};
    bool found=false;
    printf("Enter the element to search:");
    scanf("%d",&a);
    for(i=0;i<5;i++){
        if(arr[i]==a){
            printf("The num %d is at %d index.",a,i);
            found=true;
            break;
        }
    }
    if(found==false)
     printf("The element is not present in array.\n");
    
}