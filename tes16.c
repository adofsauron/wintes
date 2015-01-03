#include <stdio.h>
#include <stdlib.h>

 int main(int argc, char* argv[])
 {
      int b;
      int a[]={1,2,3};
      int *p;
      p=&a[1];
      b=*p++;
      printf("current p is %x\ncurrent *p is %d\nb is %d\n",p,*p,b);
 
     int x[]={1,2,3};
     int *y;
     y = x;
     printf("x:%x\ny:%x\n",x,++y);


     return 0;
 }