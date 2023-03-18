//Write a C program that allows the user to enter 'N' numbers and find the total positive numbers and total negative numbers using a for loop.

#include<stdio.h>
int main()
{
  int no, i, n, pos=0, neg=0;
  printf("Enter iterations: ");
  scanf("%d", &no);
  for(i=0;i<no;i++){
    printf("Enter number: ");
    scanf("%d", &n);
    if(n>=0){
      pos++;
    }
    else{
      neg++;
    }
  }
  printf("No. of positives: %d\nNo. of negatives: %d", pos, neg);
  return 0;
}

