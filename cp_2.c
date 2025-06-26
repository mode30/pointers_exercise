#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    char s[10];
    char *s_instruction ="enter s:";
    char *t_instruction ="enter t:";
    char *error_input ="enter valid input";

    fputs(s_instruction,stdin);
    if(fgets(s,sizeof(s),stdout)!=NULL){
        if(islower(s[0])){
            *s=toupper(s[0]);
        }
        else if(strlen(s) <2){
            //printf("enter valid input");
            fputs(error_input,stdout);
            putchar('\n');
            return 1;
        }

    }
    else{
        fputs(error_input,stdout);
        putchar('\n');
        return 1;
    }
   //s[strcspn(s,"\n")]='\0';
    char *t=malloc(strlen(s) +1);
    //char *t =malloc(strlen(s) +1);

    strcpy(t,s);
//    for(int i =0,n=strlen(s);i<=n;i++){
//        t[i]=s[i];
//    }
    printf("%s",t);
    putchar('\n');
    free(t);



    return 0;
}
