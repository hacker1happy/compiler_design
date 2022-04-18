// wap to implement dfa for accepting all the strings over Σ={0,1} having only odd no of 1‟s.

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
            else if(str[i]=='1')
                f='C';
            break;
        case 'B':
            if(str[i]=='0')
                f='B';
            else if(str[i]=='1')
                f='C';
            break;
        case 'C':
            if(str[i]=='0')
                f='C';
            else if(str[i]=='1')
                f='D';
            break;
        case 'D':
            if(str[i]=='0')
                f='D';
            else if(str[i]=='1')
                f='E';
            break;
        case 'E':
            if(str[i]=='0')
                f='E';
            else if(str[i]=='1')
                f='D';
            break;
        }
    }
    if(f=='C' || f=='E')
        printf("String having odd no of 1's\n");
    else
        printf("String does not having odd no of 1's\n");
    getch();
}