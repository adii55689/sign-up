#include<stdio.h>
void main()
{
 int marks;
 printf("Enter marks -->> ");
 scanf("%d",&marks);

 if (marks >= 85 && marks <=100)
{

   printf("Grade A");
}
if(marks >= 74 && marks <=84)
{
printf("Grade B");
}
if(marks>=55 && marks <= 69)
{
printf("Grade C");
}


if(marks>=40 && marks <=54 )
{
printf("Grade D");
}
if(marks <40)
{
printf("Grade F");
}


}
