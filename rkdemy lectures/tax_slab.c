#include<stdio.h>

int main(){
    int ai;

    printf("enter annual income\n");
    scanf("%d",&ai);



    if(ai<250000){
        printf("the tax to be paid is 0 ");

    }

    else if(ai>250000 && ai<=500000){
        printf("total tax to be paid is %d",ai*5/100);
    }
    else if(ai>500000 && ai<=1000000){
        printf("total tax to be paid is %d",ai*20/100);
    }
    else if(ai>1000000){
        printf("total tax to be paid is %d",ai*30/100);
    }

    

}
