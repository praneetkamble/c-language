#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main(){
    int s=0,q=1;
    char ch;
    printf("\t\t\t****welcome to my quiz application****\n\n");
    getch();

    while(q<=5){
        switch(q){
            case 1:
            system("cls");
            printf("who invented c lang ?\n");
            printf(" A . james goshling\t\t C. b jarne\n B. danis riche\t\t\t D. brendan eich\n");
            scanf(" %c",&ch);
            if (ch=='B'||ch == 'b'){
                s++;
            }
            break;

            case 2:
            system("cls");
            printf("file extension of c lang?\n");
            printf(" A . (.c)\t\t C. (.py)\n B. (.html)\t\t D. (.cpp)\n");
            scanf(" %c",&ch);
            if (ch=='A'||ch == 'a'){
                s++;
            }
            break;


            case 3:
            system("cls");
            printf("which data type store single char ?\n");
            printf(" A . int\t\t C. char\n B. float\t\t D. double\n");
            scanf(" %c",&ch);
            if (ch=='B'||ch == 'b'){
                s++;
            }
            break;


            case 4:
            system("cls");
            printf("which symbol is used to terminate a statement in c ?\n");
            printf(" A.(;) \t\t C.(:) \n B.(|) \t\t D. (.)\n");
            scanf(" %c",&ch);
            if (ch=='A'||ch == 'a'){
                s++;
            }
            break;


            case 5:
            system("cls");
            printf("what is output of printf(\"%%d\",5+4*3) ?\n");
            printf(" A . 12\t\t C. 44\n B. 10\t\t D. 17\n");
            scanf(" %c",&ch);
            if (ch=='D'||ch == 'd'){
                s++;
            }
            break;

            default:
            printf("invalid");
        }
        q++;

    }
    if(s==5){
        printf("#excellent#\nyou have scored %d marks",s);
    }
    else if(s==4){
        printf("#good#\nyou have scored %d marks",s);
    }
    else if(s==3){
        printf("#average#\nyou have scored %d marks",s);
    }
    else if(s<3){
        printf("#fail#\nyou have scored %d marks",s);
    }

}
