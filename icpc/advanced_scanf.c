#include<stdio.h>
#define end scanf("%d")
int main()
{
    char a[60];
    scanf("%[ABCDEFGHIJKLMNOPQRSTUVWXYZ]",&a);
    printf("%s",a);
    scanf("%d");
    end;
    return 0;
}
