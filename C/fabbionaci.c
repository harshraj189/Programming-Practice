#include <stdio.h>
int main(){
    int num,i;
    printf("Enter the number of terms:");
    scanf("%d",&num);
    int arr[50]={0,1};
    for(i=2;i<num;i++){
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(i=0;i<num;i++){
      printf("%d\n",arr[i]);
    }
    
}
