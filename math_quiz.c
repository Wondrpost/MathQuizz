#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void plus();
int menu();
void mines();
void multiply();
void divide();
int leaderboard_plus();
int leaderboard_minus();
int leaderboard_multiply();
int leaderboard_divide();
typedef struct{
    char nama[20];
    int poin;
}Leaderboard;
char name[20];

int main() {
    printf("please input your name: ");
    scanf("%s",&name);
    menu();
    return 0;
}

int menu(){
    system("cls");
    int a;
    printf("welcome to math quiz\nselect operator:\n1.plus\n2.mines\n3.multiply\n4.divided\nclick x to exit\n");
    scanf("%d",&a);
    if(a==1){
        plus();
    }
    else if(a==2){
        mines();
    }
    else if(a==3){
        multiply();
    }
    else if(a==4){
        divide();
    }
    else{
        system("cls");
        printf("Thankyou for playing!");
        return 0;
    }
}

int leaderboard_plus(char nama_plus[20],int point_plus){
    Leaderboard lp;
    strcpy(lp.nama,nama_plus);
    lp.poin = point_plus;
    FILE *fp;
    char *filename = "leaderboardPlus.txt";
    fp = fopen(filename,"a+");
    fprintf(fp,"%s %d\n",lp.nama,lp.poin);
    fclose(fp);
}

int leaderboard_minus(char nama_minus[20],int point_minus){
    Leaderboard lp;
    strcpy(lp.nama,nama_minus);
    lp.poin = point_minus;
    FILE *fp;
    char *filename = "leaderboardMinus.txt";
    fp = fopen(filename,"a+");
    fprintf(fp,"%s %d\n",lp.nama,lp.poin);
    fclose(fp);
}

int leaderboard_multiply(char nama_multiply[20],int point_multiply){
    Leaderboard lp;
    strcpy(lp.nama,nama_multiply);
    lp.poin = point_multiply;
    FILE *fp;
    char *filename = "leaderboardMultiply.txt";
    fp = fopen(filename,"a+");
    fprintf(fp,"%s %d\n",lp.nama,lp.poin);
    fclose(fp);
}

int leaderboard_divide(char nama_divide[20],int point_divide){
    Leaderboard lp;
    strcpy(lp.nama,nama_divide);
    lp.poin = point_divide;
    FILE *fp;
    char *filename = "leaderboarddivide.txt";
    fp = fopen(filename,"a+");
    fprintf(fp,"%s %d\n",lp.nama,lp.poin);
    fclose(fp);
}




void plus(){
    system("cls");
    int level,num1=0,num2=0,point=0,lives=3,answer,response;
    printf("\nwelcome to plus quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
            system("cls");
            num1=rand() % 11;
            num2=rand() % 11;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  +  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1+num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==2){
        while(lives!=0){
            system("cls");
            num1=rand() % 101;
            num2=rand() % 101;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  +  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1+num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==3){
        while(lives!=0){
            system("cls");
            num1=rand() % 1001;
            num2=rand() % 1001;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  +  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1+num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        leaderboard_plus(name,point);
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
void mines(){
    system("cls");
    int level,num1,num2,point=0,lives=3,answer,response;
    printf("welcome to mines quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
            system("cls");
            num1=rand() % 11;
            num2=rand() % 11;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  -  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1-num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");       
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==2){
        while(lives!=0){
            system("cls");
            num1=rand() % 101;
            num2=rand() % 101;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  -  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1-num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==3){
        while(lives!=0){
            system("cls");
            num1=rand() % 1001;
            num2=rand() % 1001;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  -  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1-num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        leaderboard_minus(name,point);
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
void multiply(){
    system("cls");
    int level,num1,num2,point=0,lives=3,answer,response;
    printf("welcome to multiply quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
            system("cls");
            num1=rand() % 11;
            num2=rand() % 11;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  x  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1*num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==2){
        while(lives!=0){
            system("cls");
            num1=rand() % 101;
            num2=rand() % 101;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  x  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1*num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==3){
        while(lives!=0){
            system("cls");
            num1=rand() % 1001;
            num2=rand() % 1001;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  x  %d =  ",num1,num2);
            scanf("%d", &answer);
            if(answer==num1*num2){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        leaderboard_multiply(name,point);
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
void divide(){
    system("cls");
    int level,point=0,lives=3,response,num1,num2;
    float answer,hasil;
    printf("welcome to plus quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
            system("cls");
            num1=rand() % 11;
            num2=rand() % 11;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  /  %d =  ",num1,num2);
            scanf("%.2f", &answer);
            hasil=(float)num1/num2;
            if(answer==hasil){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        leaderboard_divide(name,point);
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==2){
        while(lives!=0){
            system("cls");
            num1=rand() % 101;
            num2=rand() % 101;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  /  %d =  ",num1,num2);
            scanf("%d", &answer);
            hasil=(float)num1/num2;
            if(answer==hasil){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
    if(level==3){
        while(lives!=0){
            system("cls");
            num1=rand() % 1001;
            num2=rand() % 1001;
            printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
            printf("%d  /  %d =  ",num1,num2);
            scanf("%d", &answer);
            hasil=(float)num1/num2;
            if(answer==hasil){
                point+=1;
            }else{
                lives-=1;
            }
        }
        printf("game over\nexit(0)\tback to menu(1): ");
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
// #include <stdio.h>
// #include <stdlib.h>
// void plus();
// void menu();
// void mines();
// void multiply();
// void divide();
// int main() {
//     menu();
//     return 0;
// }

// void menu(){
//     int a;
//     printf("welcome to math quiz\nselect operator:\n1.plus\n2.mines\n3.multiply\n4.divided\n");
//     scanf("%d",&a);
//     if(a==1){
//         plus();
//     }
//     else if(a==2){
//         mines();
//     }
//     else if(a==3){
//         multiply();
//     }
//     else if(a==4){
//          divide();
//     }
// }


// void plus(){
//     int level,num1=0,num2=0,point=0,lives=3,answer,response;
//     printf("\nwelcome to plus quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
//     scanf("%d",&level);
//     if(level==1){
//         while(lives!=0){
//             num1=rand() % 11;
//             num2=rand() % 11;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  +  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1+num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
//     if(level==2){
//         while(lives!=0){
//             num1=rand() % 101;
//             num2=rand() % 101;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  +  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1+num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
//     if(level==3){
//         while(lives!=0){
//             num1=rand() % 1001;
//             num2=rand() % 1001;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  +  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1+num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
// }
// void mines(){
//     int level,num1,num2,point=0,lives=3,answer,response;
//     printf("welcome to mines quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
//     scanf("%d",&level);
//     if(level==1){
//         while(lives!=0){
//             num1=rand() % 11;
//             num2=rand() % 11;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  -  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1-num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
//     if(level==2){
//         while(lives!=0){
//             num1=rand() % 101;
//             num2=rand() % 101;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  -  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1-num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
//     if(level==3){
//         while(lives!=0){
//             num1=rand() % 1001;
//             num2=rand() % 1001;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  -  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1-num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
// }
// void multiply(){
//     int level,num1,num2,point=0,lives=3,answer,response;
//     printf("welcome to multiply quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
//     scanf("%d",&level);
//     if(level==1){
//         while(lives!=0){
//             num1=rand() % 11;
//             num2=rand() % 11;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  x  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1*num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
//     if(level==2){
//         while(lives!=0){
//             num1=rand() % 101;
//             num2=rand() % 101;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  x  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1*num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
//     if(level==3){
//         while(lives!=0){
//             num1=rand() % 1001;
//             num2=rand() % 1001;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  x  %d =  ",num1,num2);
//             scanf("%d", &answer);
//             if(answer==num1*num2){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
// }
// void divide(){
//     int level,point=0,lives=3,response,num1,num2;
//     float answer,hasil;
//     printf("welcome to plus quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
//     scanf("%d",&level);
//     if(level==1){
//         while(lives!=0){
//             num1=rand() % 100;
//             num2=rand() % 100;
//             printf("\npoin: %d\t\tlives: %d\n\n",point,lives);
//             printf("%d  /  %d =  ",num1,num2);
//             scanf("%.2f", &answer);
//             hasil=(float)num1/num2;
//             if(answer==hasil){
//                 point+=1;
//             }else{
//                 lives-=1;
//             }
//         }
//         printf("game over\nexit(0)\tback to menu(1): ");
//         scanf("%d",&response);
//         if(response==1){
//             menu();
//         }
//     }
// }
