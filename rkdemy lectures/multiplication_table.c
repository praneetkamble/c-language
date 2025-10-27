#include<stdio.h>
int main(){
    system("cls");
int number,i=1;
printf("enter the number ");
scanf("%d",&number);
while(i<=10){
    printf("%d x %d = %d\n",number, i, number*i);
    i++;
}
return 0;
}