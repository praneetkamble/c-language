#include<stdio.h>

int main(){
    int pin=1000, upin, i=1;


    while(1){
        printf("enter the pin\n");
        scanf("%d",&upin);

        if(pin==upin){
            printf("access gruanted\n");
            break;
        }
        else{
            i++;
            printf("access denied\n");
        
            if(i==4){
                printf("your card is blocked for 24 hrs");
                break;
            }
        }
    }
    return 0;

}