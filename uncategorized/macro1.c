#include<stdio.h>
#define hi "HI" // i'm defining a macro hi which has HI in it....!!!
int main()
{
    #ifndef hi// I'm checking whether hi is already defined or not..!!!
    printf("It's not de");
    else
    printf("It's no");
    #endif
    scanf("%d");
    return 0;
}
