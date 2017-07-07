#include "stdio.h"
void main()
{
   int i,r;
   float a[100];
    a[0]=1,a[1]=1;
   for(r=0;r<2;r++)
   {
	  printf("%f\n",a[r]);
   }
   for(i=2;i<100;i++)

   {
     a[i]=a[i-1]+a[i-2];
	 printf("%f\n",a[i]);
   }


}