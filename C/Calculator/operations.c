#include "operations.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
        scanf("%d",&op);
        int condition=1;
        switch_o(op,condition);
    }while(op!=0);
}
void input_o(){
//Error handling input 
    
}
void switch_o(int op,int condition){

    if(condition==1){
        int x=0,y=0;
        switch(op){
            case 1:
                printf("\nAddition\n");
                options(&x,&y);
                plus_o(x,y);
                break;
            case 2:
                printf("\nSubtraction\n");
                options(&x,&y);
                minus_o(x,y);
                break;
            case 3:
                printf("\nMultiplication\n");
                options(&x,&y);
                times_o(x,y);
                break;
            case 4:
                printf("\nDivision\n");
                options(&x,&y);
                by_o(x,y);
                break;
            case 5:
                printf("\nPower\n");
                options(&x,&y);
                power_o(x,y);
                break;
            case 6:
                printf("n\Root\n");
                options(&x,&y);
                root_o(x,y);
                break;
            case 0:
                printf("\nSee you next time, dear user.\n");

                break;
            default:
                printf("\nSorry, maybe you insert incorrect key.....");
                printf("\nLet's try again, Please.....");
        }
        x=y=0;
    }
    else{
       //to future
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
                printf("\nLet's try again, Please.....\n");
        }

    }

}

void options(int *x, int *y){
    printf("\nPlease insert a value to X:===========");
    scanf("%d",&*x);
    printf("\nNow, Please choice a value to Y:======");
    scanf("%d",&*y);
}
void plus_o(int x,int y){
    int z=x+y;
    printf("\nAfter some seconds calculating the result is %d.\n",z);

}
void minus_o(int x,int y){
    int z=x-y;
    printf("\nAfter some seconds calculating the result is %d.\n",z);
}
void times_o(int x, int y){
    int z=x*y;
    printf("\nAfter some seconds calculating the result is %d.\n",z);


}
void by_o(int x, int y){
    if(y==0){
        printf("Oh, my dear user, unfortunately, you set 0 to Y.");
        printf("Therefore, I don't know the result.");
    }else{
        float z=(float)x/y;
        printf("\nAfter some seconds calculating the result is %.2f.\n",z);
    }

}
void power_o(int x, int y){
     int z=0;
     //I found an error in my library, 
     //but I'll still be trying, maybe I'll create my own library
     //z=pow(y,x);
     printf("\nAfter some seconds calculating the result is %d.\n",z);
}
void root_o(int x, int y){
     //how sqrt^x(y) equals y^(1/x) then, i'm try this......
     float z=(float)1/x;
     //I found an error in my library, 
     //but I'll still be trying, maybe I'll create my own library
     //float z=(float)pow(w,y);
     printf("\nAfter some seconds calculating the result is %.2f.\n",z);
}



