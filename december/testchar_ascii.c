#include<stdio.h>
int main()
{
    int i;
    char a[15];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    printf("%c ",a[i]);
    scanf("%d");
    return 0;
}
