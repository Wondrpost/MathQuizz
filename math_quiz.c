
#include <stdio.h>
#include <stdlib.h>
void plus();
void menu();
void mines();
void multiply();
void divide();
int main() {
    menu();
    return 0;
}

void menu(){
    int a;
    printf("welcome to math quiz\nselect operator:\n1.plus\n2.mines\n3.multiply\n4.divided\n");
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
}


void plus(){
    int level,num1=0,num2=0,point=0,lives=3,answer,response;
    printf("\nwelcome to plus quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
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
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
void mines(){
    int level,num1,num2,point=0,lives=3,answer,response;
    printf("welcome to mines quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
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
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
void multiply(){
    int level,num1,num2,point=0,lives=3,answer,response;
    printf("welcome to multiply quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
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
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
void divide(){
    int level,point=0,lives=3,response,num1,num2;
    float answer,hasil;
    printf("welcome to plus quiz\npilih level:\n1.easy\n2.medium\n3.hard\n");
    scanf("%d",&level);
    if(level==1){
        while(lives!=0){
            num1=rand() % 100;
            num2=rand() % 100;
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
        scanf("%d",&response);
        if(response==1){
            menu();
        }
    }
}
