#include<stdio.h>

int main(){
    int pass=1000, upass, i=1;


    while(1){
        printf("enter the password\n");
        scanf("%d",&upass);

        if(pass==upass){
            printf("login successful\n");
            break;
        }
        else{
            i++;
            printf("try again\n");
        
            if(i==4){
                printf("try after 30 sec");
                break;
            }
        }
    }
    return 0;

}