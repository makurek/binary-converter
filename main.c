#include <stdio.h>

int main()
{

unsigned char a = 0;
unsigned char x = 0;
int i;

a = 127;

for(i = 0; i < 8; i++)
{
   x = a & 0x80;
   if(x) 
   {
      printf("%d", 1);
   }
   else printf("%d", 0);

   a = a << 1;
}

return 0;
}
