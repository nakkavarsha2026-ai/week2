#include<stdio.h>
int main( )
{
   float P,T,R,SI;
   printf("enter the principal amount,rate of interest,Time period:");
   scanf("%f%f%%f",&P,&R,&T);
   SI=P*T*R/100;
   printf("simple interest=%f",SI);
   return 0;
}  
  











    