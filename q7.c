// wap to implement dfa for accepting all the strings over Σ={0,1} where length of each string is at most 5.

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
            f='B';
            break;
        case 'B':
            f='C';
            break;
        case 'C':
            f='D';
            break;
        case 'D':
            f='E';
            break;
        case 'E':
            f='F';
            break;
        case 'F':
            f='G';
            break;
        }
    }
    if(f!='G')
        printf("String is accepted\n");
    else
        printf("String is not accepted\n");
    getch();
}