#include<stdio.h>
void add(int,int);
void sub(float,float);
void mul(int,float);


int main() {

    int a=20;
    float b=2.1,c,d;

    printf("enter two numbers for subtraction\n");
    scanf("%f%f",&c,&d);
    

    add(50,20);
    sub(c,d);
    mul(a,b);

    return 0;

}
void add(int x,int y) {
    printf("Addition = %d\n",x+y);
    
}
void sub(float c,float d) {
    printf("subtraction = %.2f\n",c-d);
}
void mul(int x,float y) {
    printf("multiplication = %.2f\n",x*y);
}

