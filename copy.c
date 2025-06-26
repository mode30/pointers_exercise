#include<ctype.h>
#include<string.h>
#include<stdio.h>
#define ARRAY_SIZE 10
int main(int argc,char *argv[]){

    char s[ARRAY_SIZE];
    char t[ARRAY_SIZE];
    char s_copy[ARRAY_SIZE];
    char t_copy[ARRAY_SIZE];

    int size_s=sizeof(s)/sizeof(s[0]);
    int size_t=sizeof(t)/sizeof(t[0]);

    char *s_instruction="enter s:";
    char *t_instruction="enter t:";

//    fputs(s_instruction,stdout);
//    if(fgets(s,sizeof(s),stdin)!=NULL){
//        strcpy(s_copy,s);
//
//    }
//    else{
//        printf("cannot read user input");
//        putchar('\n');
//    }

    fputs(s_instruction,stdout);
    if(fgets(s,sizeof(s),stdin)!=NULL){
        for(int i=0;i<size_s;i++){
            t[strcspn(t,"\n")]='\0';
        }

        if(islower(s[0])){
            s[0]=toupper(s[0]);
        }
        strcpy(s_copy,s);

    }
    else{
        printf("cannot read user input");
        putchar('\n');
    }
    fputs(t_instruction,stdout);
    if(fgets(t,sizeof(t),stdin)!=NULL){
        for(int i=0;i<size_t;i++){
            t[strcspn(t,"\n")]='\0';
        }

        if(islower(t[0])){
            t[0]=toupper(t[0]);
        }
        strcpy(t_copy,t);

    }
    else{
        printf("cannot read user input");
        putchar('\n');
    }

    printf("%s",t_copy);
    putchar('\n');
    printf("%s",s_copy);
    putchar('\n');
//
//    for(int i=0;i<strlen(s_copy);i++){
//
//        while(*(s_copy +i) !='\0'){
//
//    printf("s:%c",*(s_copy + i));
        }
    


    


