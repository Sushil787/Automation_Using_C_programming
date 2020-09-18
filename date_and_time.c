//remember this code will work in turbo because it support dos.h
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
   struct date d;

   getdate(&d);

   printf("Current system date: %d/%d/%d", d.da_day, d.da_mon, d.da_year);
   getch();
   return 0;
}
