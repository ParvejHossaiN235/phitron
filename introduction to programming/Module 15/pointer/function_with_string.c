// 15-11 Function with string

#include<stdio.h>

void fun (char s[])
{
    printf("%s\n", s);
    printf("%d\n", strlen(s));
}

int main()
{
    char s[10];
    scanf("%s ", &s);
    
    fun(s);
    return 0;
}