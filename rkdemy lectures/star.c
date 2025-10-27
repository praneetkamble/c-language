    #include<stdio.h>

    int main(){
        int i,j,k;
        

        for(int i=1;i<=3;i++){
            printf("%d\t",i);
            
            for(int j=1;j<=3;j++){
                printf("%d",j);
            }

                printf("\t");
                for(k=1;k<=4;k++){
                    printf("*");
                }
            

            
            printf("\n");

        }
    }