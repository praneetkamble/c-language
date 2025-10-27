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