#include<stdio.h>
int main (){
  int arr[]={5,7,3,24,91,2,0,3};
int size=8;

for(int i=0;i<size;i++){

int min=i;

for(int j=i+1;j<size;j++){
  
if(arr[j]<arr[min])
{
min=j;
}
}
int temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
printf("sorted array: ");
for(int k=0;k<size;k++){
printf("%d ",arr[k]);}
return 0;
}
