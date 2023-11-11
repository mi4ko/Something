#include "operations.h"
#include <stdio.h>
#include <stdlib.h>

void start(){
    printf("Calculator of what....maybe");
    printf("\n\nAh, Mathematical operations");
    printf("\n\nOh, right.");
    printf("\nLet's choice:\n");
    int op=0;
    do{
    printf("\nOperation's Main\n\n");
        printf("1) Let's try to do X plus Y?\n");
        printf("2) Let's try to do X minus Y?\n");
        printf("3) Let's try to do X times Y?\n");
        printf("4) Let's try to do X by Y?\n");
        printf("5) Let's try to do X the power of Y?\n");
        printf("6) Let's try to do Xth root Y?\n\n");
        printf("0) Do you want go ahead?\n");
        scanf("%d",op);
        int condition=1;
        switch_o(op,condition);
    }while(op!=0);
}
void switch_o(int op,int condition){

    if(condition==1){
        int x=0,y=0;
        switch(op){
            case 1:
                printf("Addition");

                options(&x,&y);

                break;
            case 2:
                printf("Subtraction");

                break;
            case 3:
                printf("Multiplication");

                break;
            case 4:
                printf("Division");

                break;
            case 5:
                printf("Power");

                break;
            case 6:
                printf("Root");

                break;
            case 0:
                printf("\nSee you next time, dear user.\n");

                break;
            default:
                printf("\nSorry, maybe you insert incorrect key.....");
                printf("\Let's try again, Please.....");
        }
        x=y=0;
    }
    else if(condition==2){
        switch(op){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 0:

                break;
            default:
                printf("\nSorry, maybe you insert incorrect key.....");
                printf("\Let's try again, Please.....");
        }

    }

}

void options(int* x, int* y){
    printf("\nPlease insert a value to X:===========");
    scanf("%d",&x);
    printf("\nNow, Please choice a value to Y:======");
    scanf("%d",&y);
}
void plus_o(int x,int y){


}
void minus_o(int x,int y){



}
void times_o(int x, int y){



}
void by_o(int x, int y){



}
void power_o(int x, int y){



}
void root(int x, int y){





}



