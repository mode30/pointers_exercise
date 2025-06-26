#include<stdio.h>
int main(int argc,char *argv[]){

    char *name_1="emma";
    char *name_2="emma";
    if(*name_1 ==*name_2){
        printf("equal");
    }
    else{
        printf("false");
    }
    return 0;
}
