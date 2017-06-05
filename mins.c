#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,mins;
  float i,j;
  printf("enter the time one\n");
  scanf("%f",&i);
  printf("enter the time two\n");
  scanf("%f",&j);
  n=i-j;
  printf("difference between two given time is\n ");
  mins=n*60;
  if(mins>0)
  {
  printf("%d",mins);
  }
  else{
   mins= mins*-1;
   printf("%d",mins);
  }
    return 0;
}
