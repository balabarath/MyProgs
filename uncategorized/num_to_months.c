#include<stdio.h>
int main()
{
    int i=0;
    char *in,*a;
    a=malloc(50);
    in=malloc(150);
    scanf("%s",in);
    strcpy(a,"");
    while(in[i]!='\0')
    {
      switch(in[i])
     {
       case '1':
            strcat(a,"jan ");
            break;
       case '2':
            strcat(a,"feb ");
            break;
       case '3':
            strcat(a,"mar ");
            break;
       case '4':
            strcat(a,"apr ");
            break;
       case '5':
            strcat(a,"may ");
            break;
       case '6':
            strcat(a,"jun ");
            break;
       case '7':
            strcat(a,"jul ");
            break;
       case '8':
            strcat(a,"aug ");
            break;
       case '9':
            strcat(a,"sep ");
            break;
       /*case '10':
            strcat(a,"oct ");
            break;
       case '11':
            strcat(a,"nov ");
            break;
       case '12':
            strcat(a,"dec ");
             break;
*/     }
     i++;
    } 
    a[i-1]='\0';
    printf("%s",a);
    scanf("%d");
    return 0;
}
