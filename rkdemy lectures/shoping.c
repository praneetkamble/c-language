#include<stdio.h>

int main(){

    int ui,pass,ch,qty;
    float total=0.0,gst,del,grand_total;

    login:
    printf("enter user id:");
    scanf("%d",&ui);

    printf("enter password:");
    scanf("%d",&pass);
    if(ui!=101 || pass!=0000){
        printf("invalid !!!!!!\nplease try again !\n\n\n");
        goto login;
    }
    printf("\t\tlogin successful \n\t\twelcome to store\n\n");
    while(1){
        printf("=*=*=*=*=*=*=*=*=*=MENU=*=*=*=*=*=*=*=*=*=\n");
        printf("srno.\t\tproduct\t\t\t price\n");
        printf("---------------------------------------------\n");
        printf("1.\t\t apple\t\t\t50 inr\n");
        printf("2.\t\t mango\t\t\t60 inr\n");
        printf("3.\t\t strawberry\t\t20 inr\n");
        printf("4.\t\tcheckout\n");


        printf("enter your choice\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            printf("enter qty of apple\n");
            scanf("%d",&qty);

            if(qty<=0){
                printf("invalid qty !!!!\ntry again\n");
                continue;
            }
            total += qty*50;
            printf("added %d apples to your cart\n",qty);
            break;


            case 2:
            printf("enter qty of mango\n");
            scanf("%d",&qty);

            if(qty<=0){
                printf("invalid qty !!!!\ntry again\n");
                continue;
            }
            total += qty*60;
            printf("added %d mango to your cart\n",qty);
            break;


            case 3:
            printf("enter qty of strawberry\n");
            scanf("%d",&qty);

            if(qty<=0){
                printf("invalid qty !!!!\ntry again\n");
                continue;
            }
            total += qty*20;
            printf("added %d strawberrys to your cart\n",qty);
            break;


            case 4:
            if(total==0){
                printf("your cart is empty!\nadd something before checkout.....\n");
                continue;
            }
            gst=total*0.05;

            del=(total<99)?30:0;

            grand_total=total+gst+del;



            printf("*-*-*-*-*-*-*-*-*-*-*-*-BILL RECIEPT-*-*-*-*-*-*-*-*-*-*-*-*\n");
            printf("subtotal=>\t\t%2f\ninr",total);
            printf("gst=>\t\t%2f\ninr",gst);
            printf("delivary charges=>\t\t%2f\ninr",del);

            printf("-------------------------------------------------------------\n");
            printf("total payable amt => \t\t %f\n",grand_total);
            printf("==============================================================\n");
            printf("thank you for shopping with us\n do visit again ***\n\n");
            break;

            default :
            printf("invalid choice");
        }
        if(ch==4){
            break;
        }


    }
}