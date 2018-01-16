#include<stdio.h>
int main()
{
  int n, r, c=0;
  printf("Enter a number\n");
  scanf("%d", &n);
  while(n > 0)
  {
     n = n/10;
     c = c + 1;  
  }
  printf("Number of digits = %d", c);
  return 0;
}
