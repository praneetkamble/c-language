#include<stdio.h>
#include<unistd.h>
int main()
{
int age;
char str;
printf("Enter your age:");
scanf("%d",&age);
  if(age>=18)
  {
  printf("Adult confirmed.\n");
  printf("Enter your gender:");
  scanf("%s",&str);
  if(str=='M'||str=='m')
   {
  printf("The colour is Blue.\n");
   }
  else if(str=='F'||str=='f')
   {
  printf("The colour is Pink.\n");
   }
  else
   {
  printf("Invalid\n");
   }
  }
  else if(age<18&&age>=0)
  {
  printf("The user is not identified as an adult.\n");
  }
  else
  {
  printf("Invalid.\n");
  }
}