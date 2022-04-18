// wap to implement dfa for accepting all the strings over Σ={0,1}, R=((1+0)1)*100 Σ={0,1}

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
            f=(str[i]=='0')?'B':'c';
            break;
        case 'B':
            f=(str[i]=='0')?'G':'D';
            break;
        case 'C':
            f=(str[i]=='0')?'E':'D';
            break;
        case 'D':
            f=(str[i]=='0')?'B':'C';
            break;
        case 'E':
            f=(str[i]=='0')?'F':'G';
            break;
        }
    }
    if(f=='F')
        printf("String is accepted\n");
    else
        printf("String is not accepted\n");
    getch();
}