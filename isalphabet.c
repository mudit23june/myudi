#include <stdio.h>
int main() 
{
   char k;
   scanf("%c",&k);
   if((k>='a' && k<='z') || (k>='A' && k<='Z'))
   {
      printf("alphabet");
   }
  else 
  {
      printf("no");
  }
  return 0;
}
