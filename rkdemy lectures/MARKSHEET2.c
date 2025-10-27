#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks:\n");
    scanf("%d",&marks);
    if(marks>=75){
        printf("destinction\n");
    }
    else if(marks>=60 && marks <75){
        printf("first class\n");
    }
    
    else if(marks>=45 && marks <60){
        printf("first class\n");
    }
    else if(marks>=35 && marks <45){
        printf("first class\n");
    }
    else if(marks<35){
        printf("fail");
    }



}
