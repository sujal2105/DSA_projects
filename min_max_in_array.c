#include <stdio.h>
#include <limits.h>

int main (){
  int n;
  scanf("%d",&n);

  int arr[1000000];
  
  for(int i=0; i<n;i++){
    scanf("%d",&arr[i]);
  }
  int maxVal,minVal;
  int i;
  
  if (n%2 == 0){
    if(arr[0]> arr[1]){
      maxVal = arr[0];
      minVal = arr[1];
      
    }else{
      maxVal = arr[1];
      minVal= arr[0];
      
    }
    i=2;
  }else{
    maxVal = minVal = arr[0];
    i = 1;
  }
  for(; i<n -1;i +=2){
    int local_max, local_min;
    if(arr[i] >arr[i+1]){
      local_max = arr[i];
      local_min = arr[i+1];
      
    }else{
      local_max = arr[i+1];
      local_min = arr[i];
      
    }
    if(local_max > maxVal) maxVal=local_max;
    
    if (local_min < minVal) minVal= local_min;
    
  }
  printf("%d %d \n", maxVal,minVal);
  return 0;
}