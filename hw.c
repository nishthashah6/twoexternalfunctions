#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    inputName(str);
    printName(str);
    return 0;
}
void inputName()
{
    char str[50];
    printf("enter name: ");
    scanf("%s",str);
    
}
void printName(char str[50])
{
    printf("\n your name is %s",str);  
    
}