#include<stdio.h>
#include<limits.h>
#define MAX 10000

int stack[MAX];
int top = -1;

void push(int value){
  if( top < MAX-1){
    stack[++top]=value;
  }
}
int findMin(){
  int min = INT_MAX;
  for(int i=0; i<=top; i++){
    if (stack[i]< min){
      min = stack[i];
    }
  }
  return min;
}

int main(){
  int n,val;
  scanf("%d", &n);
  for(int i=0; i< n; i++){
    scanf("%d",&val);
    push(val);
  }
  printf("%d\n", findMin());
  return 0;
  
}