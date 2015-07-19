#include<stdio.h>
int main()
{
    for(int i = 1, k =1; i < 10; i++)
       for(int j = 0 ;j < 10; j++)
           if(i != j )
                printf("%d%d - %d %d\n", i , j, k++, k+10);
    scanf("%d");
    return 0;
}
