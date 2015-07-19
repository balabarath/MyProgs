#include<stdio.h>
#include<stdlib.h>
char* substr(char*,int,int);
int main()
{
    int i=0,j=0,n,p1=1,p2,k=1,f=0;
    char *in,*stack,*temp;
    in=stack=temp=malloc(15);
    struct parser
    {
       char l,*r;
       
    }t[100];
    scanf("%d",&n);
   stack[0]='$';
   stack[1]='\0';
  //printf("%s      ",stack);
    for(i=0;i<n;i++) 
    {
     //t[i].l=malloc(1);
     t[i].r=malloc(10);
     t[i].l=getche();
     scanf("%s",t[i].r);
     //printf("%c %s\n",t[i].l,t[i].r);
    }
    i=0;
    printf("%s      ",stack);
    scanf("%s",in);
    strcat(in,"$");
    printf("     %s",in);
    printf("%d",strlen(in));
   
    while(i<strlen(in))
    {
     // printf("%s      ",stack);
      //printf("%d %d\n",i,strlen(in));
       //printf("hai\n");
       if(*(stack+j)=='$'&&*(in+i)=='$')
       {
         printf("hai\n");
         f=1;
         break;
       }
       else if(*(stack+j)==t[0].l&&*(in+i)=='$')
         *(stack+j)=='\0';  
         else if(*(stack+j)!=t[0].l&&*(in+i)=='$'){
              break;
              }
       else
       {
           printf("hai\n");
         //  printf("%s      ",stack);
           stack[strlen(stack)]=in[i];
           stack[strlen(stack)+1]='\0';
           //for(k=0;k<strlen(stack)-1;k++)
           //*(temp+k)=*(stack+k+1);
           
           p2=strlen(stack)-1;
           for(k=0;k<n;k++)
          for(p1=1;p1<strlen(stack)-1;p1++)
          if(strcmp(substr(temp,p1,p2),t[k].r)==0)
          {
           *(stack+p1)=t[k].l;
           *(stack+p1+1)='\0';
           j=p1+1;
           break;
          } 
       }
       i++;
       j++;
    }
    if(f==1)
     printf("\n<---The Given String is accepted--->");
    else
     printf("\n<---The Given String is not accepted--->");
     getche();
    return 0;
}
char *substr(char *str,int n1,int n2)
{
     char *sub;
     sub=malloc(n2-n1+2);
     int s;
     for(s=0;s<=n1;s++)
     *str++;
     for(s=0;s<=n2;s++,str++)
     *(sub+s)=*str;
     *(str+s)='\0';
     printf("%s",sub);
     return sub;
}
