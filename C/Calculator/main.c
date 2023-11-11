#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int main(int argc,char *argv[])
{
    if(argc>1){
        printf("\nOps. You call me with another code people.");
        printf("I'm not know........\n");
        for(int i=0;i<argc;i++){
            printf("Person %d : %s\n",(i+1),argv[i]);
        }
        printf("\nI'm sleeping now. See you next time.\n");
    }else{
        printf("\nSo, i was correctly called, i will awake my process.\n");
        start();
    }

}
