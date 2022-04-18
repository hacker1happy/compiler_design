// wap to implement dfa for accepting all the strings R=(ab+a)*bab

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

void main(){

    int n;
    char str[MAX], f='0';

    printf("Enter the string of 'a' 'b'\n");
    gets(str);
    n=strlen(str);
    for(int i=0;i<n;i++){
        switch (f)
        {
        case '0':
            f=(str[i]=='a')?'1':'2';
            break;
        case '1':
            f=(str[i]=='a')?'1':'3';
            break;
        case '2':
            f=(str[i]=='a')?'4':'8';
            break;
        case '3':
            f=(str[i]=='a')?'5':'2';
            break;
        case '4':
            f=(str[i]=='a')?'8':'6';
            break;
        case '5':
            f=(str[i]=='a')?'1':'7';
            break;
        case '6':
            f='8';
            break;
        case '7':
            f=(str[i]=='a')?'5':'2';
            break;
        }
    }
    if(f=='7' || f=='6')
        printf("String is accepted\n");
    else
        printf("String is not accepted\n");
    getch();
}