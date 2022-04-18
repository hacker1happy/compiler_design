// wap to implement dfa for accepting all the strings ending with '00'

#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 100

void main(){

    int n;
    char str[MAX], f='A';

    printf("Enter the string of '0' '1'\n");
    gets(str);
    n=strlen(str);
    for(int i=0;i<n;i++){
        switch (f)
        {
        case 'A':
            if(str[i]=='0')
                f='B';
            break;
        case 'B':
            if(str[i]=='0')
                f='C';
            else if(str[i]=='1')
                f='A';
            break;
        case 'C':
            if(str[i]=='0')
                f='C';
            else if(str[i]=='1')
                f='A';
            break;
        }
    }
    if(f=='C')
        printf("String ends with '00'\n");
    else
        printf("String does not end with '00'\n");
    getch();
}