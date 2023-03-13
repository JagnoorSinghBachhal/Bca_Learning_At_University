//A number is said to be valid if it is divisible by 8. Write a program that allows the user to keep entering numbers as long as the input is valid and also displays a count of the valid numbers. Use a while loop to complete the task

int main() 
{
  int num, valid=0;
  while(1)
  {
    printf("Enter no: ");
    scanf("%d", &num);
    if(num%8==0)
    {
      valid++;
      continue;
    }
    break;
    
  }
  printf("Valid input count: %d", valid);
  return 0;
}
