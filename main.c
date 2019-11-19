#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x , y ,tax1 ,tax2 ,tax3 , tax4, tax5, tax6 ;
  printf("enter your gross salary : ");
  scanf("%f", &x);
  tax1 = x * 0.1;
  tax2 = x * 0.12;
  tax3 = x * 0.08;
  x = x - 20;

  tax4 = x-tax1;
  tax5 = x-tax2;
  tax6=x-tax3;

  (x>=1000) ? printf("your net salary is equal $ %0.2f", tax4 ) : (x<1000 && x>= 500) ? printf("your net salary is equal $ %0.2f ", tax5 ) : printf("your net salary is equal $ %0.2f ", tax6);

    return 0;
}
