//insertion sort c program

#include<stdio.h>
int main(){
  
  int arr[]={ 9,3, 45,8,1,4};
  int size=6;

  for(int i=1;i<size;i++){
       int temp=arr[i];
       int j=i-1;
    for(;j>=0;j--){
  
if (temp<arr[j]){
 arr[j+1]=arr[j];
}
else{
break;}
}
    
arr[j+1]=temp;}
printf("sorted array: ");
  
for (int k=0;k<size;k++){
  
printf("%d ",arr[k]);
}
return 0;
}
