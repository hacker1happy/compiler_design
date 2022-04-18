// wap to implement dfa for accepting all the strings R=(b|ab*ab*)*

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

void main(){

    int n;
    char str[MAX], f='1';

    printf("Enter the string of 'a' 'b'\n");
    gets(str);
    n=strlen(str);
    for(int i=0;i<n;i++){
        switch (f)
        {
        case '1':
            f=(str[i]=='b')?'2':'0';
            break;
        case '2':
            f=(str[i]=='|')?'3':'8';
            break;
        case '3':
            f=(str[i]=='a')?'4':'8';
            break;
        case '4':
            if(str[i]=='a')
                f='6';
            else if(str[i]=='b')
                f='5';
            else
                f='8';
            break;
        case '5':
            if(str[i]=='a')
                f='6';
            else if(str[i]=='|')
                f='8';
            break;
        case '6':
            f=(str[i]=='b')?'7':'8';
            break;
        case '7':
            if(str[i]=='a')
                f='8';
            else if(str[i]=='|')
                f='3';
            break;
        }
    }
    if(f=='1' || f=='6')
        printf("String is accepted\n");
    else
        printf("String is not accepted\n");
    getch();
}