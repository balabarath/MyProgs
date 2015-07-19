#include<stdio.h>
#include<stdlib.h>
int compare(const void*,const void*);
int main()
{
    int a[10];
    int i=0;
    for(;i<10;i++)
    scanf("%d",&a[i]);
    qsort(a,13,sizeof(int),compare);
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    system("pause");
    return 0;
} 
int compare(const int *a,const int *b)
{
    //int *x=(int *)a;
    //int *y=(int *)b;
    return *a-*b;
}
