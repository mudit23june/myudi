#include <stdio.h>
int main() 
{
   char k;
   scanf("%c",&k);
   if((k>='a' && k<='z') || (k>='A' && k<='Z'))
   {
   if(k=='A'||k=='a'||k=='E'||k=='e'||k=='I'||k=='i'||k=='O'||k=='o'||k=='U'||k=='u')
   {
     printf("vowel");
   }
   else
   {
      printf("consonant");
   }
   }
   else
   {
    printf("Not an alphabet\n");
   }
   return 0;
}
