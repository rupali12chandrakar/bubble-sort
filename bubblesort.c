#include<stdio.h>
int main(){
  
  int arr[]={7,2,4,8,9,12,5};
  int size=7;
  
  for(int i=0;i<size-1;i++){
     for(int j=0;j<size-1-i;j++){
       if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
       }
     }
  }
printf("sorted array: ");
for (int k=0;k<size;k++){
  
printf("%d",arr[k]);
}
  
return 0;
}
