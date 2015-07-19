#include<stdio.h>
#define hi "HI" // i'm defining a macro hi which has HI in it....!!!
int main()
{
    #ifndef hi// I'm checking whether hi is already defined or not..!!! also the if condition fails
    printf("It's not defined");
    #else// now it is entering into else part..!!
    printf("It's defined....!!!! %s",hi);
    #endif// I'm closing the macro if condition
      
    //    #undef hi//Now i'm undefining the macro hi.. it hasn't any defintion....
    
    #undef hi
    
    #ifndef hi// I'm checking whether hi is already defined or not..!!! also the if condition passes
    #define hi "HI" // i'm defining a macro hi which has HI in it....!!!
    printf("\nNow i defined");
    #else// now it is entering into else part..!!
    printf("It's defined....!!!! %s",hi);
    #endif// I'm closing the macro if condition
      
    scanf("%d");
    return 0;
}
