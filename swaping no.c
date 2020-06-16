#include<stdio.h>
int main()
{

int a= 10;
int b= 20;

printf("no's are a=%d , b=%d""\n", a,b);

a=a+b;
b=a-b;
a=a-b;
printf("no's after swapping are a=%d,b=%d",a,b);
return 0 ;


}
