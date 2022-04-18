// wap to implement dfa for accepting all the strings over Σ={0,1} where each string contain substring “0101”

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
            f=(str[i]=='0')?'B':'A';
            break;
        case 'B':
            f=(str[i]=='0')?'B':'C';
            break;
        case 'C':
            f=(str[i]=='0')?'D':'A';
            break;
        case 'D':
            f=(str[i]=='0')?'B':'E';
            break;
        }
    }
    if(f=='E')
        printf("String is accepted\n");
    else
        printf("String is not accepted\n");
    getch();
}