#include<stdio.h>
int main()
{
    FILE *f;
    char a[1000],b[3];
    int i,j;
    printf("Please Enter the title message:");
    gets(a);
    printf("Please Enter the size of the welcome message:");
    scanf("%s",b);
    f=fopen("html_example.html","w+");
    fprintf(f,"<html><head><title>%s</title></head><body><div align=\"Center\"><font size=\"%s\"> Welcome to the feinix Code Rally</font></div></body></html>",a,b);
    fclose(f);
    return 0;
}
